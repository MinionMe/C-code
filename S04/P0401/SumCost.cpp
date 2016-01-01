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
	cout << "������һ������" << endl;
	cin >> a ;
	cout << "������һ������" << endl;
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
	cout << a << "��" << b << "�����Լ���ǣ�" << N1 << endl;
	t1.mb_reportInMicrosecond();
	cout << a << "��" << b << "����С�������ǣ�" << N2 << endl;
	t2.mb_reportInMicrosecond();
}