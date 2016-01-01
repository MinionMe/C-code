#include <iostream>
#include "SumCost.h"
#include "GetInteger.h"
#include "Time.h"
using namespace std;

void SumCost::mb_run()
{
	long long int a,b,N1,N2;
	int i;
	const int DC_RepeatTimes = 1000000;
	cout << "请输入一个整数" << endl;
	cin >> a ;
	cout << "请输入一个整数" << endl;
	cin >> b ;
	if (a < b)
	{
		N1 = b;
		b = a;
		a = N1;
	}
	Time t1,t2;
	t1.mb_setScale(1.0 / DC_RepeatTimes);
	t1.mb_getStart();
	for (i = 0;i < DC_RepeatTimes;i++)
	{
		N1 = GetDivisor(a,b);
	}
	t1.mb_getEnd();
	t2.mb_setScale(1.0 / DC_RepeatTimes);
	t2.mb_getStart();
	for (i = 0;i < DC_RepeatTimes;i++)
	{
		N2 = GetCommon(a,b,N1);
	}
	t2.mb_getEnd();
	cout << a << "和" << b << "的最大公约数是：" << N1 << endl;
	t1.mb_reportInMicrosecond();
	cout << a << "和" << b << "的最小公倍数是：" << N2 << endl;
	t2.mb_reportInMicrosecond();
}