#include "Get_r.h"

extern int get_integer(int x,int y)
{
	int i,r,a,b,result[32] = {0},N = 0;
	for (i = 0;i < 32;i++)
	{
		r = i % 5;
		switch (r)
		{
		case 0:
			a = x >> i;
			b = ~a;
			result[i] = b&1;
			result[i] = result[i] << i;
			break;
		case 1:
			a = y >> i;
			b = ~a;
			result[i] = b&1;
			result[i] = result[i] << i;
			break;
		case 2:
			a = x >> i;
			b = y >> i;
			result[i] = a|b;
			result[i] = result[i]&1;
			result[i] = result[i] << i;
			break;
		case 3:
			a = x >> i;
			b = y >> i;
			result[i] = a&b;
			result[i] = result[i]&1;
			result[i] = result[i] << i;
			break;
		default:
			a = x >> i;
			b = y >> i;
			result[i] = a^b;
			result[i] = result[i]&1;
			result[i] = result[i] << i;
			break;
		}
		N += result[i];
	}
	return N;
}