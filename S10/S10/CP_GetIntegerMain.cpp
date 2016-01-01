#include <iostream>
using namespace std;
#include "CP_GetInteger.h"
#include "CP_Exception.h"

int main(int argc, char* args[ ])
{
	float i;
	do 
	{
		i = gb_DealException();
	} while (i == 1.5);
	cout << "输入的整数是: " << (int)i << endl;
	return 0;
} // main函数结束
