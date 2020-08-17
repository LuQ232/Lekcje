#include <iostream>
#include <algorithm>
class Point
{
    int x;
    int y;
public:
    void set(int first, int second)
    {
        x = first;
        y = second;
    }
    const int get_x()
    {
        return x;
    }
    const int get_y()
    {
        return y;
    }
    void set_x(int first)
    {
        x = first;
    }
    void set_y(int second)
    {
        y = second;
    }
};

class Square
{
    int left;
    int right;
    int top;
    int bottom;


public:
    void set(Point p1, Point p2, Point p3, Point p4)
    {
        
        left = std::min({ p1.get_y(), p2.get_y(), p3.get_y(), p4.get_y() });

        right = std::max({ p1.get_y(), p2.get_y(), p3.get_y(), p4.get_y() });

        top = std::max({ p1.get_x(), p2.get_x(), p3.get_x(), p4.get_x() });

        bottom = std::min({ p1.get_x(), p2.get_x(), p3.get_x(), p4.get_x() });


        std::cout << "Left: " << left <<"\n";
        std::cout << "Right: " <<right << "\n";
        std::cout << "bottom: " << bottom << "\n";
        std::cout << "top: " << top << "\n";
    }

    bool is_point_in_square(Point p)
    {
        if (p.get_x() >= left && p.get_x() <= right && p.get_y() >= bottom && p.get_y() <= top)
            return true;
        else
            return false;
    }

};
int main()
{
    int x, y;
    Point p1;
    Point p2;
    Point p3;
    Point p4;
    Point p5;


    std::cout << "1 Wierzcholek (x,y):";
    std::cin >> x >> y;
    p1.set(x, y);

    std::cout << "2 Wierzcholek (x,y):";
    std::cin >> x >> y;
    p2.set(x, y);
    std::cout << "3 Wierzcholek (x,y):";
    std::cin >> x >> y;
    p3.set(x, y);
    std::cout << "4 Wierzcholek (x,y):";
    std::cin >> x >> y;
    p4.set(x, y);
    std::cout << "Wspolrzedne punktu (x,y): ";
    std::cin >> x >> y;
    p5.set(x, y);

   
    Square s;
    s.set(p1, p2, p3, p4);
    if (s.is_point_in_square(p5))
        std::cout << "POINT IS IN SQUARE\n";
    else
        std::cout << "POINT IS NOT IN SQUARE\n";

    
    return 0;
}

