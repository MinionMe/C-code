#ifndef CP_CHAIN_H
#define CP_CHAIN_H
#include <iostream>
#include "CP_DebugLogActive.h"
using namespace std;

class CP_Chain
{
public:
	char m_name[20];             // ����
	int  m_strength;             // ����
	int  m_intelligence;         // ����
	int  m_power;                // ����
	int  m_charisma;             // ����
	int  m_luck;                 // ����
	class CP_Chain * m_previous; // ǰһ��
	// ���m_previous==NULL�����������һ��������
	class CP_Chain * m_next;     // ��һ��
public:
	CP_Chain( );
	~CP_Chain();
	void mb_createNode(CP_DebugLogActive & a);
	void CP_Chain::mb_deleteNode(CP_Chain * p,CP_DebugLogActive & a);
}; // ��CP_Chain�������
extern void gb_copySingleNode(CP_Chain & destination, CP_Chain & source);
extern void gb_createNodeFromFile(CP_Chain & r, char* fileName,CP_DebugLogActive & a);

#endif // !CP_CHAIN_H
