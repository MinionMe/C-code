#include "OutPut.h"
#include <iostream>
using namespace std;

void OutPut(Date d,int N)
{
	cout << N << "天之后的日期为" << d.year << "年" << d.month << "月" << d.day << "日" << endl;
}