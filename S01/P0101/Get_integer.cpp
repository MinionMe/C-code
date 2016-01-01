#include <iostream>
#include "Get_integer.h"
using namespace std;

int Get_integer1(int N)
{
	int result1 = 0,i;
	for (i = 2;i <= N;i += 2 )
	{
		result1 += i;
	}
	return result1;
}
int Get_integer2(int N)
{
	int result2 = 0;
	result2 = (N / 2) * (N / 2 + 1);
	return result2;
}