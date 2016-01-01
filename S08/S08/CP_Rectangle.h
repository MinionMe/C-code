#ifndef CP_RECTANGLE_H
#define CP_RECTANGLE_H
#include "CP_Point2D.h"

class CP_Rectangle
{
public:
	CP_Rectangle();
	CP_Rectangle(double x1,double y1,double x2,double y2);
	~CP_Rectangle();

public:
	CP_Point2D p1,p2;
};
extern void gb_drawRectangle(CDC* pDC, CP_Rectangle& c, double scale, CP_Point2D& translation, int screenX, int screenY);

#endif // !CP_RECTANGLE_H
