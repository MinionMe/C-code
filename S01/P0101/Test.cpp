#include <iostream>
using namespace std;
#include "Test.h"

int Test( )
{
	int N;
	cout << "������������: " << endl;
	cin >> N;
	while (N <= 0)
	{
		cout << "������������: " << endl;
		cin >> N;
	}
	cout << "������Ϊ��" << N << endl;
	int result1 = Get_integer1(N),result2 = Get_integer2(N);
	cout << "����1��" << result1 << endl;
	cout << "����2��" << result2 << endl;
	return 0;
} 
