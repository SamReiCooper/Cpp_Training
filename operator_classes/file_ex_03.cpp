#include <iostream>

class Point
{
    private:
        double x, y, z;
    public:
        Point(double i_x=0, double i_y=0, double i_z=0)
        {
            x = i_x;
            y = i_y;
            z = i_z;
        }
        ~Point(){}
        const double get_x()
        {
            return x;
        }
        const double get_y()
        {
            return y;
        }
        const double get_z()
        {
            return z;
        }
        void display()
        {
            std::cout << x << " " << y << " " << z << std::endl;
        }
        Point *operator=(Point *p)
        {
            *this = p;
            return this;
        }
};

Point operator+(Point p1, Point p2)
{
    Point out(p1.get_x()+p2.get_x(), p1.get_y()+p2.get_y(), p1.get_z()+p2.get_z());
    return out;
}

Point operator+(Point p, double a)
{
    Point out(p.get_x() + a, p.get_y() + a, p.get_z() + a);
    return out;
}

int main()
{
    Point p1(2,2,2);
    Point p2(7,5,6);
    Point p_0, p_1, p_2;
    p_0 = p1 + p2;
    p_0.display();
    p_1 = p1 + 2.8;
    p_2 = 2.8 + p2;
    p_1.display();
    p_2.display();
    return 0;
}