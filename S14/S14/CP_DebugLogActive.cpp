#include "CP_DebugLogActive.h"

CP_DebugLogActive::CP_DebugLogActive( )
{
	m_active = true;
	m_logFileName = NULL;
} // ��CP_DebugLogActive�Ĺ��캯���������

CP_DebugLogActive::CP_DebugLogActive(char* fileName)
{
	m_active = true;
	m_logFileName = NULL;
	mb_setFileName(fileName);
} // ��CP_DebugLogActive�Ĺ��캯���������
CP_DebugLogActive::~CP_DebugLogActive( )
{
	delete [ ] m_logFileName;
} // ��CP_DebugLogActive�����������������

void CP_DebugLogActive::mb_clear( )
{
	if (!m_active)
		return;
	if (m_logFileName!=NULL)
	{
		ofstream outFile(m_logFileName, ios::out);
		outFile.close( ); // ������伴ʹ��д,Ҳ�ᱻ����
	} // if����
} // ��CP_DebugLogActive�ĳ�Ա����mb_clear�������
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
} // ��CP_DebugLogActive�ĳ�Ա����mb_setFileName�������
