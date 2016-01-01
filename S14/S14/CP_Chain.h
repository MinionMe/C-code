#ifndef CP_CHAIN_H
#define CP_CHAIN_H
#include <iostream>
#include "CP_DebugLogActive.h"
using namespace std;

class CP_Chain
{
public:
	char m_name[20];             // 姓名
	int  m_strength;             // 体力
	int  m_intelligence;         // 智力
	int  m_power;                // 武力
	int  m_charisma;             // 魅力
	int  m_luck;                 // 运气
	class CP_Chain * m_previous; // 前一个
	// 如果m_previous==NULL，则表明这是一个空链表。
	class CP_Chain * m_next;     // 后一个
public:
	CP_Chain( );
	~CP_Chain();
	void mb_createNode(CP_DebugLogActive & a);
	void CP_Chain::mb_deleteNode(CP_Chain * p,CP_DebugLogActive & a);
}; // 类CP_Chain定义结束
extern void gb_copySingleNode(CP_Chain & destination, CP_Chain & source);
extern void gb_createNodeFromFile(CP_Chain & r, char* fileName,CP_DebugLogActive & a);

#endif // !CP_CHAIN_H
