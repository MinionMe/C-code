#include "GetNowDate.h"
#include "Date.h"
#include <iostream>
using namespace std;

void GetNowDate(int N,Date &d1,Date &d2)
{
	static int day_tab[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	int i;
	if (N > 0)
	{
		for (i = 0;i < N;i++)
		{
			if (d2.day == day_tab[leap(d2.year)][d2.month])
			{
				d2.day = 1;
				if (d2.month == 12)
				{
					d2.month = 1;
					d2.year ++;
				}
				else
					d2.month++;				
			}	
			else d2.day++;
		}
	}
	else
	{
		for (i = 0;i > N;i--)
		{
			if (d2.day == 1)
			{
				if (d2.month == 1)
				{
					d2.month = 12;
					d2.year --;
					d2.day = day_tab[leap(d2.year)][d2.month];
				}
				else
				{
					d2.month--;	
					d2.day = day_tab[leap(d2.year)][d2.month];
				}
			}	
			else d2.day--;
		}
	}
}