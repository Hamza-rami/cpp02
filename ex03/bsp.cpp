#include "Point.hpp"

static float triangleArea(const Point &a, const Point &b, const Point &c)
{
    float x1 = a.getx().toFloat();
    float y1 = a.gety().toFloat();
    float x2 = b.getx().toFloat();
    float y2 = b.gety().toFloat();
    float x3 = c.getx().toFloat();
    float y3 = c.gety().toFloat();

    return std::fabs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0f;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float AreaABC = triangleArea(a, b, c);
    float AreaPAB = triangleArea(point, a, b);
    float AreaPBC = triangleArea(point, b, c);
    float AreaPCA = triangleArea(point, c, a);
    
    return (AreaABC == (AreaPAB + AreaPBC + AreaPCA));
}
