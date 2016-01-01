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
} // 类CP_Chain的构造函数定义结束
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
		cout << "这是一个空链表" << endl;
		return;
	} // if结束
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
	while (p!=this); // do/while结构结束
} // 类CP_Chain的成员函数mb_out定义结束
void CP_Chain::mb_createNode( )
{
	if (m_previous == NULL)
	{
		m_previous = this;
		m_next = this;
		return;
	} // if结束
	CP_Chain* p = m_previous;     // p指向尾结点
	m_previous = new CP_Chain; // 不考虑内存分配失败
	m_previous->m_next = this;  // this指向首结点
	p->m_next = m_previous;
	m_previous->m_previous = p;
} // 类CP_Chain的成员
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
		} // for循环结束
	}
	else
	{
		for (k=0, p=this; k>i; k--)
		{
			p= p->m_previous;
		} // for循环结束
	}
	return(*p);
} // 类CP_Chain的操作符重载函数operator [ ]定义结束
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
		r.mb_createNode( );
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
void gb_copySingleNode(CP_Chain & destination, CP_Chain & source)
{
	strcpy_s(destination.m_name, 20, source.m_name);
	destination.m_strength = source.m_strength;
	destination.m_intelligence = source.m_intelligence;
	destination.m_power = source.m_power;
	destination.m_charisma = source.m_charisma;
	destination.m_luck = source.m_luck;
} 

