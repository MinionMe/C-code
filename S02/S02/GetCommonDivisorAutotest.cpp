#include "GetCommonDivisorAutotest.h"
#include <iostream>
using namespace std;

int GetCommonDivisorAutotest(int (*f)(int a,int b))
{
	int num[10][2] = {2,3,6,8,14,26,40,57,98,305,246,1000,234,2049,20,19230,990,1980,1000,25000};
	int result[10] = {1,2,2,1,1,2,3,10,990,1000};
	int i,nDifferent = 0;
	cout << "���԰�����Ϊ10" << endl;
	for (i = 0;i < 10;i++)
	{
		if (f(num[i][0],num[i][1]) != result[i])
		{
			nDifferent++;
			cout << "���԰�����" << num[i][0] << "," << num[i][1] << "�Ľ��" << f(num[i][0],num[i][1]) << "����Ӧ��Ϊ" << result[i] << endl;
		}
		else
			cout << "���԰�����" << num[i][0] << "," << num[i][1] << "�Ľ��" << f(num[i][0],num[i][1]) << "����" << endl;
	}
	cout << "�������Ϊ" << nDifferent << endl;
	return 0;
}