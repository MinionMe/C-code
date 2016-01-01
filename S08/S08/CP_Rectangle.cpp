#include "stdafx.h"
#include "CP_Rectangle.h"

CP_Rectangle::CP_Rectangle()
{
	p1.m_x = 0.0;
	p1.m_y = 0.0;
	p2.m_x = 0.0;
	p2.m_y = 0.0;	
}
CP_Rectangle::CP_Rectangle(double x1,double y1,double x2,double y2)
{
	p1.m_x = x1;
	p1.m_y = y1;
	p2.m_x = x2;
	p2.m_y = y2;	
}
CP_Rectangle::~CP_Rectangle()
{

}
void gb_drawRectangle(CDC* pDC, CP_Rectangle& c, double scale, CP_Point2D& translation, int screenX, int screenY)
{
	CP_Rectangle p;
	gb_pointConvertFromGlobalToScreen(p.p1,c.p1,scale,translation,screenX,screenY);
	gb_pointConvertFromGlobalToScreen(p.p2,c.p2,scale,translation,screenX,screenY);
	pDC->Rectangle(p.p1.m_x,p.p1.m_y,p.p2.m_x,p.p2.m_y);
}