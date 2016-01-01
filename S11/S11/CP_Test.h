/*
* CP_Test.h
*
* 
*
* 定义函数gb_test(int data)
*
* 李书昂
*
* version1.0, 2015/05/19
*
* 版权声明
*/



#ifndef CP_TEST_H
#define CP_TEST_H


/**联合体U_doubleIntData*/

union U_doubleIntData
{
	int m_intData;
	float m_doubleData;
};
extern void gb_test();

#endif // !CP_TEST_H
