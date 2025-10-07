#include "Point.hpp"

int main()
{
    Point a(1,1);
    Point b(4,3);
    Point c(2,4);

    Point p1(2,2);
    Point p2(1,4);
    // Point p3(2, 0); // on edge

    std::cout << "p1 is " << (bsp(a, b, c, p1) ? "inside" : "outside") << " the triangle\n";
    std::cout << "p2 is " << (bsp(a, b, c, p2) ? "inside" : "outside") << " the triangle\n";
    // std::cout << "p3 is " << (bsp(a, b, c, p3) ? "inside" : "outside") << " the triangle\n";

    return 0;
}