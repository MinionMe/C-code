#include "CP_Exception.h"
#include "CP_GetInteger.h"
#include <iostream>
using namespace std;

float gb_DealException()
{
	try
	{
		int a = 0;
		a = gb_getInteger();
		return a;
	}
	catch (char ch)
	{
		cout << "输入异常，含非法字符。请重新输入" << endl;
		return 1.5;
	}
	catch (int n)
	{
		cout << "输入整数溢出。请重新输入" << endl;
		return 1.5;
	}
}