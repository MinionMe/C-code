#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	cout << "请输入今天日期："<< endl;
	cout << "请输入年" << endl;
	cin >> year ;
	cout << "请输入月" << endl;
	cin >> month ;
	cout << "请输入日" << endl;
	cin >> day;
}
Date::Date(Date &p)
{
	year = p.year;
	month = p.month;
	day = p.day;
}
Date::~Date()
{

}
int leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}
