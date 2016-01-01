#include "GetCommonDivisorAutotest.h"
#include <iostream>
using namespace std;

int GetCommonDivisorAutotest(int (*f)(int a,int b))
{
	int num[10][2] = {2,3,6,8,14,26,40,57,98,305,246,1000,234,2049,20,19230,990,1980,1000,25000};
	int result[10] = {1,2,2,1,1,2,3,10,990,1000};
	int i,nDifferent = 0;
	cout << "测试案例数为10" << endl;
	for (i = 0;i < 10;i++)
	{
		if (f(num[i][0],num[i][1]) != result[i])
		{
			nDifferent++;
			cout << "测试案例：" << num[i][0] << "," << num[i][1] << "的结果" << f(num[i][0],num[i][1]) << "有误，应当为" << result[i] << endl;
		}
		else
			cout << "测试案例：" << num[i][0] << "," << num[i][1] << "的结果" << f(num[i][0],num[i][1]) << "无误" << endl;
	}
	cout << "错误个数为" << nDifferent << endl;
	return 0;
}