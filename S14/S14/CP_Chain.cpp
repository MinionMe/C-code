#include "CP_Chain.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <direct.h>
#include <iostream>
using namespace std;

using namespace std;

CP_Chain::CP_Chain( ): 
	m_strength(0),
	m_intelligence(0),
	m_power(0),
	m_charisma(0),
	m_luck(0),
	m_previous(NULL),
	m_next(NULL)
{
	m_name[0]='\0';
} // ��CP_Chain�Ĺ��캯���������
CP_Chain::~CP_Chain()
{
	ofstream outfile("testDebugLogActive.txt", ios::app);
	if (m_previous == NULL)
		return;
	m_previous->m_next = NULL;
	outfile << "����delete\n";
	delete m_next;
} 
void gb_copySingleNode(CP_Chain & destination, CP_Chain & source)
{
	strcpy_s(destination.m_name, 20, source.m_name);
	destination.m_strength = source.m_strength;
	destination.m_intelligence = source.m_intelligence;
	destination.m_power = source.m_power;
	destination.m_charisma = source.m_charisma;
	destination.m_luck = source.m_luck;
} // gb_copySingleNode�����������

void CP_Chain::mb_createNode(CP_DebugLogActive & a)
{
	if (m_previous == NULL)
	{
		m_previous = this;
		m_next = this;
		return;
	} // if����
	CP_Chain* p = m_previous;     // pָ��β���
	m_previous = new CP_Chain;
	a << "����new\n";// �������ڴ����ʧ��
	m_previous->m_next = this;  // thisָ���׽��
	p->m_next = m_previous;
	m_previous->m_previous = p;
} // ��CP_Chain�ĳ�Ա
void gb_createNodeFromFile(CP_Chain & r, char* fileName,CP_DebugLogActive & a)
{
	if (fileName==NULL)
		return;
	ifstream inFile(fileName, ios::in|ios::out);
	char name[20];
	CP_Chain *p = NULL;
	while (!inFile.eof( ))
	{
		inFile >> name;
		if (!inFile.good( ))
		{
			cout << "��ȡ�ļ�����!" << endl;
			char buffer[_MAX_PATH];
			buffer[0] = 0;
			if (_getcwd(buffer, _MAX_PATH)==NULL)
				cout << "�޷���ȡ��ǰ·��!" << endl;
			else
			{
				cout << "��ǰ·����: " << buffer << endl;
			} // if/else�ṹ����
			break;
		} // if ����
		if(name[0] =='#')
			break;
		r.mb_createNode(a);
		p = r.m_previous;
		strcpy_s(p->m_name, 20, name);
		inFile >> p->m_strength;             // ����
		inFile >> p->m_intelligence;         // ����
		inFile >> p->m_power;                // ����
		inFile >> p->m_charisma;             // ����
		inFile >> p->m_luck;                 // ����
	} // whileѭ������
	inFile.close( ); // ������䲻д,Ҳ�ᱻ����
} // gb_createNodeFromFile�����������
void CP_Chain::mb_deleteNode(CP_Chain * p,CP_DebugLogActive & a)
{
	if (m_previous == NULL)
		return;
	CP_Chain* q;
	if (p==this) // ɾ����1����¼
	{
		if (p->m_previous==this) // ���ڵ�
		{
			p->m_previous=NULL;
			return;
		} // if�ṹ����
		gb_copySingleNode(*this, *(p->m_next));
		p = p->m_next;
	} // if�ṹ����
	for (q=m_next; ((q!=p)&&(q!=this)) ; )
	{
		if (q!=NULL)
			q=q->m_next;
		else break;
	} // forѭ������
	if (q==this)
		return;
	if (q!=p)
		return;
	q=p->m_previous;
	q->m_next = p->m_next;
	q=p->m_next;
	q->m_previous = p->m_previous;
	p->m_previous = p;
	// p->m_next = NULL;
	delete p;
} // ��CP_Chain�ĳ�Ա����mb_deleteNode�������


