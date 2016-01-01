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
} // 类CP_Chain的构造函数定义结束
CP_Chain::~CP_Chain()
{
	ofstream outfile("testDebugLogActive.txt", ios::app);
	if (m_previous == NULL)
		return;
	m_previous->m_next = NULL;
	outfile << "调用delete\n";
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
} // gb_copySingleNode函数定义结束

void CP_Chain::mb_createNode(CP_DebugLogActive & a)
{
	if (m_previous == NULL)
	{
		m_previous = this;
		m_next = this;
		return;
	} // if结束
	CP_Chain* p = m_previous;     // p指向尾结点
	m_previous = new CP_Chain;
	a << "调用new\n";// 不考虑内存分配失败
	m_previous->m_next = this;  // this指向首结点
	p->m_next = m_previous;
	m_previous->m_previous = p;
} // 类CP_Chain的成员
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
			cout << "读取文件有误!" << endl;
			char buffer[_MAX_PATH];
			buffer[0] = 0;
			if (_getcwd(buffer, _MAX_PATH)==NULL)
				cout << "无法读取当前路径!" << endl;
			else
			{
				cout << "当前路径是: " << buffer << endl;
			} // if/else结构结束
			break;
		} // if 结束
		if(name[0] =='#')
			break;
		r.mb_createNode(a);
		p = r.m_previous;
		strcpy_s(p->m_name, 20, name);
		inFile >> p->m_strength;             // 体力
		inFile >> p->m_intelligence;         // 智力
		inFile >> p->m_power;                // 武力
		inFile >> p->m_charisma;             // 魅力
		inFile >> p->m_luck;                 // 运气
	} // while循环结束
	inFile.close( ); // 这条语句不写,也会被调用
} // gb_createNodeFromFile函数定义结束
void CP_Chain::mb_deleteNode(CP_Chain * p,CP_DebugLogActive & a)
{
	if (m_previous == NULL)
		return;
	CP_Chain* q;
	if (p==this) // 删除第1个记录
	{
		if (p->m_previous==this) // 单节点
		{
			p->m_previous=NULL;
			return;
		} // if结构结束
		gb_copySingleNode(*this, *(p->m_next));
		p = p->m_next;
	} // if结构结束
	for (q=m_next; ((q!=p)&&(q!=this)) ; )
	{
		if (q!=NULL)
			q=q->m_next;
		else break;
	} // for循环结束
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
} // 类CP_Chain的成员函数mb_deleteNode定义结束


