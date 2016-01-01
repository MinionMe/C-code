#ifndef CP_DEBUGLOGACTIVE_H
#define CP_DEBUGLOGACTIVE_H

// #include "CP_DebugLogActive.h"

#include <iostream>
using namespace std;
#include <fstream>

class CP_DebugLogActive
{
public:
	char * m_logFileName;
	bool m_active;

public:
	CP_DebugLogActive( );
	CP_DebugLogActive(char* fileName);
	~CP_DebugLogActive( );

	void mb_clear( );
	void mb_setFileName(char* fileName);
	template <typename T>
	CP_DebugLogActive& operator <<(const T& data)
	{
		if (m_active)
		{
			if (m_logFileName!=NULL)
			{
				ofstream outFile(m_logFileName, ios::out|ios::app);
				outFile << data;
				outFile.close( ); // 这条语句即使不写,也会被调用
			} // 内部if结构结束
		} // 外部if结构结束
		return(*this);
	} // 类CP_DebugLogActive的operator <<定义结束
}; // 类CP_DebugLogActive定义结束

#endif
