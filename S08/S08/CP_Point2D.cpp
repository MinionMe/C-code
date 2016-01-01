#include "stdafx.h"
#include <cmath>
#include <stdlib.h>

#include "CP_Point2D.h"

CP_Point2D::CP_Point2D():m_x(0.0),m_y(0.0)
{

}
CP_Point2D::CP_Point2D(double x,double y):m_x(x),m_y(y)
{

}
CP_Point2D::~CP_Point2D()
{

}
void gb_DrawPoint2D(CDC *pDC,CP_Point2D& p, double scale, CP_Point2D& translation, int gap, int screenX, int screenY )
{
	CP_Point2D r;
	gb_pointConvertFromGlobalToScreen(r,p,scale,translation,screenX,screenY);
	int x = (int)(r.m_x + 0.5);
	int y = (int)(r.m_y + 0.5);
	pDC->MoveTo(x - gap,y);
	pDC->LineTo(x + gap,y);
	pDC->MoveTo(x,y - gap);
	pDC->LineTo(x,y + gap);
}
void gb_pointConvertFromGlobalToScreen(CP_Point2D& result, CP_Point2D pointGlobal, double scale, CP_Point2D translation, int screenX, int screenY)
{
	result.m_x = (pointGlobal.m_x - translation.m_x) * scale;
	result.m_y = (pointGlobal.m_y - translation.m_y) * scale;
	result.m_x += screenX/2;
	result.m_y = screenY/2 - result.m_y;
}
void gb_pointConvertFromScreenToGlobal(CP_Point2D& result, CP_Point2D pointScreen, double scale, CP_Point2D translation, int screenX, int screenY)
{
	result.m_x = pointScreen.m_x - screenX/2;
	result.m_y = screenY/2 - pointScreen.m_y;
	result.m_x = result.m_x/scale + translation.m_x;
	result.m_y = result.m_y/scale + translation.m_y;

}
double gb_getDistanceOfTwoPoints(CP_Point2D& p1, CP_Point2D& p2)
{
	double dx = p2.m_x - p1.m_x;
	double dy = p2.m_y - p1.m_y;
	double d = dx * dx + dy * dy;
	d = sqrt(d);
	return d;
}
