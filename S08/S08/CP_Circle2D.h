#ifndef CP_CIRCLE2D_H
#define CP_CIRCLE2D_H

#include "CP_Point2D.h"

class CP_Circle2D
{
public:
	CP_Point2D m_center;
	double     m_radius;

public:
	CP_Circle2D( );
	CP_Circle2D(double x, double y, double r);
	~CP_Circle2D( );
}; // 类CP_Circle2D定义结束

extern void gb_drawCircle(CDC* pDC, CP_Circle2D& c, double scale, CP_Point2D& translation, int screenX, int screenY);

#endif
