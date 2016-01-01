#include "CP_DebugLogActive.h"

CP_DebugLogActive::CP_DebugLogActive( )
{
	m_active = true;
	m_logFileName = NULL;
} // 类CP_DebugLogActive的构造函数定义结束

CP_DebugLogActive::CP_DebugLogActive(char* fileName)
{
	m_active = true;
	m_logFileName = NULL;
	mb_setFileName(fileName);
} // 类CP_DebugLogActive的构造函数定义结束
CP_DebugLogActive::~CP_DebugLogActive( )
{
	delete [ ] m_logFileName;
} // 类CP_DebugLogActive的析构函数定义结束

void CP_DebugLogActive::mb_clear( )
{
	if (!m_active)
		return;
	if (m_logFileName!=NULL)
	{
		ofstream outFile(m_logFileName, ios::out);
		outFile.close( ); // 这条语句即使不写,也会被调用
	} // if结束
} // 类CP_DebugLogActive的成员函数mb_clear定义结束
void CP_DebugLogActive::mb_setFileName(char* fileName)
{
	if (!m_active)
		return;
	if (fileName==NULL)
		return;
	int length = strlen(fileName);
	length++;
	if (length<=1)
		return;
	delete [ ] m_logFileName;
	m_logFileName = new char[length];
	if (m_logFileName==NULL)
		return;
	strcpy_s(m_logFileName, length, fileName);
} // 类CP_DebugLogActive的成员函数mb_setFileName定义结束
