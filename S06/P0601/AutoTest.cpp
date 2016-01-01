#include "CP_Complex.h"
#include "AutoTest.h"
#include <iostream>
using namespace std;

void AutoTest()
{
	CP_Complex a1(2.45,7.83),a2(3.28,3.49),a3(-12.7,23.4);
	CP_Complex a0;

	cout << "a1=(" << a1.m_real << "," << a1.m_image << ")" << endl;
	cout << "a2=(" << a2.m_real << "," << a2.m_image << ")" << endl;
	cout << "a3=(" << a3.m_real << "," << a3.m_image << ")" << endl;
	cout << "²âÊÔ¼Ó·¨ÖØÔØ" << endl;
	a0 = a1 + a2;
	cout << "a1 + a2=(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = a2 + a3;
	cout << "a2 + a3=(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = a1 + a3;
	cout << "a1 + a3=(" << a0.m_real << "," << a0.m_image << ")" << endl;
	cout << endl;

	cout << "a1=(" << a1.m_real << "," << a1.m_image << ")" << endl;
	cout << "a2=(" << a2.m_real << "," << a2.m_image << ")" << endl;
	cout << "a3=(" << a3.m_real << "," << a3.m_image << ")" << endl;
	cout << "²âÊÔ¼õ·¨ÖØÔØ" << endl;
	a0 = a1 - a2;
	cout << "a1 - a2=(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = a2 - a3;
	cout << "a2 - a3=(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = a1 - a3;
	cout << "a1 - a3=(" << a0.m_real << "," << a0.m_image << ")" << endl;
	cout << endl;

	cout << "a1=(" << a1.m_real << "," << a1.m_image << ")" << endl;
	cout << "a2=(" << a2.m_real << "," << a2.m_image << ")" << endl;
	cout << "a3=(" << a3.m_real << "," << a3.m_image << ")" << endl;
	cout << "²âÊÔ³Ë·¨ÖØÔØ" << endl;
	a0 = a1 * a2;
	cout << "a1 * a2=(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = a2 * a3;
	cout << "a2 * a3=(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = a1 * a3;
	cout << "a1 * a3=(" << a0.m_real << "," << a0.m_image << ")" << endl;
	cout << endl;

	cout << "a1=(" << a1.m_real << "," << a1.m_image << ")" << endl;
	cout << "a2=(" << a2.m_real << "," << a2.m_image << ")" << endl;
	cout << "a3=(" << a3.m_real << "," << a3.m_image << ")" << endl;
	cout << "²âÊÔ³ý·¨ÖØÔØ" << endl;
	a0 = a1 / a2;
	cout << "a1 / a2=(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = a2 / a3;
	cout << "a2 / a3=(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = a1 / a3;
	cout << "a1 / a3=(" << a0.m_real << "," << a0.m_image << ")" << endl;
	cout << endl;

	cout << "a1=(" << a1.m_real << "," << a1.m_image << ")" << endl;
	cout << "a2=(" << a2.m_real << "," << a2.m_image << ")" << endl;
	cout << "a3=(" << a3.m_real << "," << a3.m_image << ")" << endl;
	cout << "²âÊÔºó¼ÓÖØÔØ" << endl;
	a0 = a1++;
	cout << "a1++(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = a2++;
	cout << "a2++(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = a3++;
	cout << "a3++(" << a0.m_real << "," << a0.m_image << ")" << endl;
	cout << endl;

	cout << "a1=(" << a1.m_real << "," << a1.m_image << ")" << endl;
	cout << "a2=(" << a2.m_real << "," << a2.m_image << ")" << endl;
	cout << "a3=(" << a3.m_real << "," << a3.m_image << ")" << endl;
	cout << "²âÊÔºó¼õÖØÔØ" << endl;
	a0 = a1--;
	cout << "a1--(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = a2--;
	cout << "a2--(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = a3--;
	cout << "a3--(" << a0.m_real << "," << a0.m_image << ")" << endl;
	cout << endl;

	cout << "a1=(" << a1.m_real << "," << a1.m_image << ")" << endl;
	cout << "a2=(" << a2.m_real << "," << a2.m_image << ")" << endl;
	cout << "a3=(" << a3.m_real << "," << a3.m_image << ")" << endl;
	cout << "²âÊÔÇ°¼ÓÖØÔØ" << endl;
	a0 = ++a1;
	cout << "++a1(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = ++a2;
	cout << "++a2(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = ++a3;
	cout << "a3(" << a0.m_real << "," << a0.m_image << ")" << endl;
	cout << endl;

	cout << "a1=(" << a1.m_real << "," << a1.m_image << ")" << endl;
	cout << "a2=(" << a2.m_real << "," << a2.m_image << ")" << endl;
	cout << "a3=(" << a3.m_real << "," << a3.m_image << ")" << endl;
	cout << "²âÊÔÇ°¼õÖØÔØ" << endl;
	a0 = --a1;
	cout << "--a1(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = --a2;
	cout << "--a2(" << a0.m_real << "," << a0.m_image << ")" << endl;
	a0 = --a3;
	cout << "--a3(" << a0.m_real << "," << a0.m_image << ")" << endl;
	cout << endl;
}
