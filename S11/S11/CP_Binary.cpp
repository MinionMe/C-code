/*
* CP_Binary.cpp
*
* 
*
* ���庯��gb_outputBinary(int data)
*
* ���鰺
*
* version1.0, 2015/05/19
*
* ��Ȩ����
*/



#include <iostream>
using namespace std;
#include "CP_Binary.h"


/**
 * �õ�int�͵Ķ�������ʽ
 * ������data,�޷���ֵ
 * ���鰺, 2015/05/19
 */


void gb_outputBinary(int data)
{
	const int n = sizeof(int)*8+1;
	char buf[n];
	_itoa_s(data, buf, 2);
	cout << "(" << data << ")_ʮ���� = (";
	cout << buf;
	cout << ")_�����ơ�" << endl;
}
