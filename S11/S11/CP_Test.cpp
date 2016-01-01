/*
* CP_Test.cpp
*
* 
*
* 定义函数gb_test(int data)
*
* 李书昂
*
* version1.0, 2015/05/19
*
* 版权声明
*/



#include "CP_Test.h"
#include "CP_Binary.h"
#include <iostream>
using namespace std;


/**
 * 调用gb_outputBinary(),实现double储存数据，输出二进制形式
 * 无返回值
 * 李书昂, 2015/05/19
 */



void gb_test()
{
	cout << "自动测试请输入1，手动测试请按0" << endl;
	int i;
	cin >> i;
	if (i == 0)
	{
		U_doubleIntData doubleIntData;
		cout << "请输入一个实数"<< endl;
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

