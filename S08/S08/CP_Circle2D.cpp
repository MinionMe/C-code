#include "stdafx.h"
#include "CP_Circle2D.h"

CP_Circle2D::CP_Circle2D()
{
	m_center.m_x = 0.0;
	m_center.m_y = 0.0;
	m_radius = 0.0;
}
CP_Circle2D::CP_Circle2D(double x,double y,double r)
{
	m_center.m_x = x;
	m_center.m_y = y;
	m_radius = r;
}
CP_Circle2D::~CP_Circle2D()
{

}
void gb_drawCircle(CDC* pDC, CP_Circle2D& c, double scale, CP_Point2D& translation, int screenX, int screenY)
{
	CP_Point2D p;
	double r = c.m_radius * scale;
	gb_pointConvertFromGlobalToScreen(p,c.m_center,scale,translation,screenX,screenY);
	pDC->Ellipse((int)(p.m_x - r),(int)(p.m_y - r),(int)(p.m_x + r),(int)(p.m_y + r));
}