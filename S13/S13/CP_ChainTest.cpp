#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <direct.h>
#include "CP_ChainTest.h"
#include <iostream>
#include "CP_Chain.h"
using namespace std;


void gb_testChainFindMostPowerful(CP_Chain & c)
{
	if (c.m_previous == NULL)
		return ;
	CP_Chain* p1;
	CP_Chain* p2;
	CP_Chain q;
	for (p1=c.m_next; p1!=&c; p1=p1->m_next)
		for (p2 = &c;p2 != p1;p2 = p2->m_next)
		{
			if (p1->m_power > p2->m_power)
			{
				gb_copySingleNode(q,*p2);
				gb_copySingleNode(*p2,*p1);
				gb_copySingleNode(*p1,q);
			}
		} // forѭ������	
}
void gb_testChainFindMost(CP_Chain & c)
{
	if (c.m_previous == NULL)
		return ;
	CP_Chain* p1;
	CP_Chain* p2;
	CP_Chain q;
	for (p1=c.m_next; p1!=&c; p1=p1->m_next)
		for (p2 = &c;p2 != p1;p2 = p2->m_next)
		{
			if (p1->m_power + p1->m_strength + p1->m_intelligence + p1->m_luck + p1->m_charisma > 
				p2->m_power + p2->m_strength + p2->m_intelligence + p2->m_luck + p2->m_charisma)
			{
				gb_copySingleNode(q,*p2);
				gb_copySingleNode(*p2,*p1);
				gb_copySingleNode(*p1,q);
			}
		} // forѭ������
}
void gb_testChain( )
{
	CP_Chain c;
	gb_createNodeFromFile(c, "��������.txt");
	cout << "ʹ��������" << endl;
	c.mb_out( );
	gb_testChainFindMostPowerful(c);
	cout << "��������ֵ�ɴ�С����" << endl;
	c.mb_out();
	gb_testChainFindMost(c);
	cout << "�����ۺ�ֵ�ɴ�С����" << endl;
	c.mb_out();
} // gb_testChain��������
