#include "Get_r.h"
#include <iostream>
using namespace std;

int main()
{
	int x,y,r;
	cout << "请输入一个整数 x:" << endl;
	cin >> x;
	cout << "请输入一个整数 y:" << endl;
	cin >> y;
	r = get_integer(x,y);
	cout << hex;
	cout << "二进制计算结果N（用十六进制输出）：" << r << endl;
	return 0;
}