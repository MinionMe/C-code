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
		cout << "�����쳣�����Ƿ��ַ�������������" << endl;
		return 1.5;
	}
	catch (int n)
	{
		cout << "�����������������������" << endl;
		return 1.5;
	}
}