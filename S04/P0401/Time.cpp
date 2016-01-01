#include "Time.h"
#include <iostream>
using namespace std;

Time::Time():m_scale(1.0)
{
	TimeStart = clock();
	TimeEnd = TimeStart;
}
void Time::mb_getStart( )
{
	TimeStart = clock();
}
void Time::mb_getEnd( )
{
	TimeEnd = clock();
}
void Time::mb_reportInMicrosecond( )
{
	clock_t d = TimeEnd - TimeStart;
	double r = (double)(d)/(double)CLOCKS_PER_SEC * m_scale * 1000000;
	cout << "所用时间是" << r << "微秒。" << endl;
}
