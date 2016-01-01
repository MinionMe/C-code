#include "CP_Complex.h"

CP_Complex::~CP_Complex()
{

}
CP_Complex CP_Complex::operator+(CP_Complex &a)
{
	CP_Complex b;
	b.m_image = m_image + a.m_image;
	b.m_real = m_real + a.m_real;
	return b;
}
CP_Complex CP_Complex::operator-(CP_Complex &a)
{
	CP_Complex b;
	b.m_image = m_image - a.m_image;
	b.m_real = m_real - a.m_real;
	return b;
}
CP_Complex CP_Complex::operator *(CP_Complex &a)
{
	CP_Complex b;
	b.m_image = m_real * a.m_image + m_image * a.m_real;
	b.m_real = m_real * a.m_real - m_image * a.m_image;
	return b;
}
CP_Complex CP_Complex::operator /(CP_Complex &a)
{
	CP_Complex b;
	double r = 1 / (a.m_real * a.m_real + a.m_image * a.m_image);
	b.m_image = r * (m_image * a.m_real - m_real * a.m_image);
	b.m_real = r * (m_real * a.m_real + m_image * a.m_image);
	return b;
}
CP_Complex &CP_Complex::operator ++()
{
	m_real++;
	m_image++;
	return (*this);
}
CP_Complex CP_Complex::operator ++(int)
{
	CP_Complex old = *this;
	m_real++;
	m_image++;
	return old;
}
CP_Complex &CP_Complex::operator --()
{
	m_real--;
	m_image--;
	return (*this);
}

CP_Complex CP_Complex::operator --(int)
{
	CP_Complex old = *this;
	m_real--;
	m_image--;
	return old;
}
