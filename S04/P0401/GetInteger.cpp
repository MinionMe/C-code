#include <iostream>
#include "GetInteger.h"
using namespace std;

long long int GetCommon(long long int a,long long int b,long long int N)
{
	return a * b / N;
}
long long int GetDivisor(long long int a,long long int b)
{
	long long int r;
	while (a % b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return b;
}