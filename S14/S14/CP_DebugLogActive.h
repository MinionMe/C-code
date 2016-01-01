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
				outFile.close( ); // ������伴ʹ��д,Ҳ�ᱻ����
			} // �ڲ�if�ṹ����
		} // �ⲿif�ṹ����
		return(*this);
	} // ��CP_DebugLogActive��operator <<�������
}; // ��CP_DebugLogActive�������

#endif
