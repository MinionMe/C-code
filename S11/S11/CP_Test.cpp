/*
* CP_Test.cpp
*
* 
*
* ���庯��gb_test(int data)
*
* ���鰺
*
* version1.0, 2015/05/19
*
* ��Ȩ����
*/



#include "CP_Test.h"
#include "CP_Binary.h"
#include <iostream>
using namespace std;


/**
 * ����gb_outputBinary(),ʵ��double�������ݣ������������ʽ
 * �޷���ֵ
 * ���鰺, 2015/05/19
 */



void gb_test()
{
	cout << "�Զ�����������1���ֶ������밴0" << endl;
	int i;
	cin >> i;
	if (i == 0)
	{
		U_doubleIntData doubleIntData;
		cout << "������һ��ʵ��"<< endl;
		cin >> doubleIntData.m_doubleData;
		cout << doubleIntData.m_doubleData << endl;
		gb_outputBinary(doubleIntData.m_intData);
	}
	if (i == 1)
	{
		U_doubleIntData doubleIntData1;
		doubleIntData1.m_doubleData = 0.0f;
		doubleIntData1.m_doubleData = 0.0f/doubleIntData1.m_doubleData;
		gb_outputBinary(doubleIntData1.m_intData);
		doubleIntData1.m_doubleData = 0.0f;
		doubleIntData1.m_doubleData = +1/doubleIntData1.m_doubleData;
		gb_outputBinary(doubleIntData1.m_intData);
		doubleIntData1.m_doubleData = 0.0f;
		doubleIntData1.m_doubleData = -1/doubleIntData1.m_doubleData;
		gb_outputBinary(doubleIntData1.m_intData);
		doubleIntData1.m_doubleData = +0.0;
		gb_outputBinary(doubleIntData1.m_intData);
		doubleIntData1.m_doubleData = -0.0;
		gb_outputBinary(doubleIntData1.m_intData);
		doubleIntData1.m_doubleData = 0.1;
		gb_outputBinary(doubleIntData1.m_intData);
		doubleIntData1.m_doubleData = 2.3;
		gb_outputBinary(doubleIntData1.m_intData);
		doubleIntData1.m_doubleData = -4.5;
		gb_outputBinary(doubleIntData1.m_intData);
	}
}

