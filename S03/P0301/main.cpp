#include "Get_r.h"
#include <iostream>
using namespace std;

int main()
{
	int x,y,r;
	cout << "������һ������ x:" << endl;
	cin >> x;
	cout << "������һ������ y:" << endl;
	cin >> y;
	r = get_integer(x,y);
	cout << hex;
	cout << "�����Ƽ�����N����ʮ�������������" << r << endl;
	return 0;
}