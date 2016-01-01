#include "CP_Chain.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <direct.h>

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
	if (m_previous == NULL)
		return;
	m_previous->m_next = NULL;
	delete m_next;
} 
void CP_Chain::mb_out( )
{
	if (m_previous == NULL)
	{
		cout << "����һ��������" << endl;
		return;
	} // if����
	CP_Chain * p = this;
	do
	{
		cout << p->m_name << "\t";
		cout << p->m_strength << "\t";
		cout << p->m_intelligence << "\t";
		cout << p->m_power << "\t";
		cout << p->m_charisma << "\t";
		cout << p->m_luck << endl;
		p = p->m_next;
	}
	while (p!=this); // do/while�ṹ����
} // ��CP_Chain�ĳ�Ա����mb_out�������
void CP_Chain::mb_createNode( )
{
	if (m_previous == NULL)
	{
		m_previous = this;
		m_next = this;
		return;
	} // if����
	CP_Chain* p = m_previous;     // pָ��β���
	m_previous = new CP_Chain; // �������ڴ����ʧ��
	m_previous->m_next = this;  // thisָ���׽��
	p->m_next = m_previous;
	m_previous->m_previous = p;
} // ��CP_Chain�ĳ�Ա
CP_Chain & CP_Chain::operator [ ] (int i)
{
	if (i==0)
		return (*this);
	if (this->m_previous==NULL)
		return (*this);
	int k;
	CP_Chain* p;
	if (i>=0)
	{
		for (k=0, p=this; k<i; k++)
		{
			p= p->m_next;
		} // forѭ������
	}
	else
	{
		for (k=0, p=this; k>i; k--)
		{
			p= p->m_previous;
		} // forѭ������
	}
	return(*p);
} // ��CP_Chain�Ĳ��������غ���operator [ ]�������
void gb_createNodeFromFile(CP_Chain & r, char* fileName)
{
	if (fileName==NULL)
		return;
	ifstream inFile(fileName, ios::in);
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
		r.mb_createNode( );
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
void gb_copySingleNode(CP_Chain & destination, CP_Chain & source)
{
	strcpy_s(destination.m_name, 20, source.m_name);
	destination.m_strength = source.m_strength;
	destination.m_intelligence = source.m_intelligence;
	destination.m_power = source.m_power;
	destination.m_charisma = source.m_charisma;
	destination.m_luck = source.m_luck;
} 

