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
	cout << "�����������: " << (int)i << endl;
	return 0;
} // main��������
