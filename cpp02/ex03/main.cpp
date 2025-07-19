# include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);
    // Point p(1, 1);

    // std::cout << "The point ( x= " << p.getX() << "\t\ty=" << p.getY() << "\t) is inside the triangle \n" <<
    // "\ta(x= " << a.getX() << "\t\ty =" << a.getY() << "\t)\n" <<
    //  "\tb(x= " << b.getX() << "\t\ty =" << b.getY() << "\t)\n" <<
    //   "\tc(x= " << c.getX() << "\t\ty =" << c.getY() << "\t)\n" << std::endl;

    // if (bsp(a, b, c, p) == true)
    //     std::cout << "TRUE" << std::endl;
    // else
    //     std::cout << "FALSE" << std::endl;
    Point inside(5, 5);
    Point outside(15, 5);
    Point onEdge(5, 0);

    std::cout << "Triangle: A(0,0), B(10,0), C(5,10)\n";

    if (bsp(a, b, c, inside))
        std::cout << "Point (5,5): Inside" << std::endl;
    else
        std::cout << "Point (5,5): Outside" << std::endl;

    if (bsp(a, b, c, outside))
        std::cout << "Point (15,5): Inside" << std::endl;
    else
        std::cout << "Point (15,5): Outside" << std::endl;

    if (bsp(a, b, c, onEdge))
        std::cout << "Point (5,0): Inside" << std::endl;
    else
        std::cout << "Point (5,0): Outside" << std::endl;


    return 0;
}