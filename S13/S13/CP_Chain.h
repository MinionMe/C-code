#ifndef CP_CHAIN_H
#define CP_CHAIN_H
#include <iostream>
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
	~CP_Chain( );
	CP_Chain & operator [ ] (int i);
	void mb_createNode( );
	void mb_out( );
}; // ��CP_Chain�������

extern void gb_copySingleNode(CP_Chain & destination, CP_Chain & source);
extern void gb_createNodeFromFile(CP_Chain & r, char* fileName);


#endif // !CP_CHAIN_H
