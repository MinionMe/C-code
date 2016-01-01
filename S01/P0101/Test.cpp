#include <iostream>
using namespace std;
#include "Test.h"

int Test( )
{
	int N;
	cout << "请输入正整数: " << endl;
	cin >> N;
	while (N <= 0)
	{
		cout << "请输入正整数: " << endl;
		cin >> N;
	}
	cout << "该整数为：" << N << endl;
	int result1 = Get_integer1(N),result2 = Get_integer2(N);
	cout << "方法1：" << result1 << endl;
	cout << "方法2：" << result2 << endl;
	return 0;
} 
