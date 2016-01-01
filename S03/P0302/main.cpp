#include "Get_Prime.h"
#include <iostream>
using namespace std;

int main()
{
	int m,n,i,temp;
	cout << "请输入一个整数m：" << endl;
	cin >> m;
	cout << "请输入一个整数n：" << endl;
	cin >> n;
	if (m > n)
	{
		temp = n;
		n = m;
		m =temp;
	}
	cout << "从" << m << "到" << n << "的所有素数：" << endl;
	for (i = m,temp = 0;i <= n;i++)
	{
		if (Is_Prime(i) == 1)
		{
			cout << i << endl;
		}
		else temp++;
	}
	if (temp == n - m + 1)
	{
		cout << "这两个数之间不存在素数" << endl;
	}
	return 0;
}