#include <iostream>
#include <cstring>
using namespace std;
#include "CP_GetInteger.h"

int gb_getInteger( )
{
	char result[1000];
	long long int n,i,value;
	cout << "������һ������: " << endl;
	cin >> result;
	n = strlen(result);
	if (cin.eof( ))
	{
		cout << "���뱻��ֹ�����������" << endl;
		return 0;
	} // if�ṹ����
	if (result[0] == '-')
	{
		for (i = 1;i < n;i++)
		{
			if (result[i] > '9' || result[i] < '0')
			{
				break;
			}
		}
		if (i == n)
		{
			value = 0;
			for (i = 1;i < n;i++)
			{
				value = value * 10 + result[i] - '0';
			}
			if ((value < -2147483647) || (value > 2147483646))
			{
				throw 0;
			}
			else
			{
				return -value;
			}
		}
	}
	for (i = 0;i < n;i++)
	{
		if (result[i] > '9' || result[i] < '0')
		{
			throw result[i];
		}
	}
	value = result[0] - '0';
	for (i = 1;i < n;i++)
	{
		value = value * 10 + result[i] - '0';
	}
	if ((value < -2147483647) || (value > 2147483646))
	{
		throw 0;
	}
	else
	{
		return value;
	}
} // gb_getInteger��������
