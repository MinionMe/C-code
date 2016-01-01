#ifndef CP_POINT2D_H
#define CP_POINT2D_H
#include "stdafx.h"
#include <stdlib.h>

class CP_Point2D
{
public:
	CP_Point2D();
	CP_Point2D(double x,double y);
	~CP_Point2D();

public:
	double m_x,m_y;

};
extern void gb_DrawPoint2D(CDC *pDC,CP_Point2D& p, double scale, CP_Point2D& translation, int gap, int screenX, int screenY );
extern void gb_pointConvertFromGlobalToScreen(CP_Point2D& result, CP_Point2D pointGlobal, double scale, CP_Point2D translation, int screenX, int screenY);
extern void gb_pointConvertFromScreenToGlobal(CP_Point2D& result, CP_Point2D pointScreen, double scale, CP_Point2D translation, int screenX, int screenY);
extern double gb_getDistanceOfTwoPoints(CP_Point2D& p1, CP_Point2D& p2);

#endif // !CP_POINT2D_H
