#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	cout << "������������ڣ�"<< endl;
	cout << "��������" << endl;
	cin >> year ;
	cout << "��������" << endl;
	cin >> month ;
	cout << "��������" << endl;
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
