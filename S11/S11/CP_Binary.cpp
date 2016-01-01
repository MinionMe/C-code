/*
* CP_Binary.cpp
*
* 
*
* 定义函数gb_outputBinary(int data)
*
* 李书昂
*
* version1.0, 2015/05/19
*
* 版权声明
*/



#include <iostream>
using namespace std;
#include "CP_Binary.h"


/**
 * 得到int型的二进制形式
 * 参数：data,无返回值
 * 李书昂, 2015/05/19
 */


void gb_outputBinary(int data)
{
	const int n = sizeof(int)*8+1;
	char buf[n];
	_itoa_s(data, buf, 2);
	cout << "(" << data << ")_十进制 = (";
	cout << buf;
	cout << ")_二进制。" << endl;
}
