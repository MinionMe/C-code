#include "Get_Prime.h"
#include <cmath>

extern int Is_Prime(int x)
{
	int i;
	if (x == 1)
	{
		return 0;
	}
	for (i = 2;i <= sqrt(x);i++)
	{
		if (x % i == 0)
		{
			break;
		}
	}
	if (i > sqrt(x))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}