#ifndef CP_COMPLEX_H
#define CP_COMPLEX_H

class CP_Complex
{
public:
	CP_Complex(double r = 0,double i = 0):m_image(i),m_real(r){};
	~CP_Complex();
	CP_Complex operator +(CP_Complex& a);
	CP_Complex operator -(CP_Complex& a);
	CP_Complex operator *(CP_Complex& a);
	CP_Complex operator /(CP_Complex& a);
	CP_Complex &operator ++();
	CP_Complex operator ++(int);
	CP_Complex &operator --();
	CP_Complex operator --(int);
public:
	double m_real;
	double m_image;
};

#endif