#include "Date.h"
#include "GetNowDate.h"
#include "OutPut.h"
#include <iostream>
using namespace std;

int main()
{
	int N;
	Date d1;
	Date d2(d1);
	cout << "����������N" << endl;
	cin >> N;
	GetNowDate(N,d1,d2);
	OutPut(d2,N);
}