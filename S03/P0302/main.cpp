#include "Get_Prime.h"
#include <iostream>
using namespace std;

int main()
{
	int m,n,i,temp;
	cout << "������һ������m��" << endl;
	cin >> m;
	cout << "������һ������n��" << endl;
	cin >> n;
	if (m > n)
	{
		temp = n;
		n = m;
		m =temp;
	}
	cout << "��" << m << "��" << n << "������������" << endl;
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
		cout << "��������֮�䲻��������" << endl;
	}
	return 0;
}