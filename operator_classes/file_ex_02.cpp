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
        Point operator+(Point p)
        {
            Point out(x+p.get_x(), y+p.get_y(), z+p.get_z());
            return out;
        }
        Point *operator=(Point *p)
        {
            *this = p;
            return this;
        }
        void display()
        {
            std::cout << x << " " << y << " " << z << std::endl;
        }
};

int main()
{
    Point p1(1,2,3);
    Point p2(4,5,6);
    Point p;
    p = p1 + p2;
    p.display();
    return 0;
}