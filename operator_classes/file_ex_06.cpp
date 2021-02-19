#include <iostream>
using namespace std;
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
        Point *operator=(Point *p)
        {
            *this = p;
            return this;
        }
        friend Point operator+(Point, Point);
        friend Point operator+(Point, double);
        friend ostream& operator<<(ostream& os, Point& p); 
};

inline Point operator+(Point p1, Point p2)
{
    Point out(p1.x+p2.x, p1.y+p2.y, p1.z+p2.z);
    return out;
}

inline Point operator+(Point p, double a)
{
    Point out(p.x + a, p.y + a, p.z + a);
    return out;
}

inline ostream& operator<<(ostream& os, Point& p)
{
    os << "x=" << p.x << "\n" << "y=" << p.y << "\n" << "z=" << p.z << "\n" << endl;
}

int main()
{
    Point p1(4,4,4);
    Point p2(4,7,6);
    Point p_0, p_1, p_2;
    cout << p1;
    cout << p2;
    p_0 = p1 + p2;
    p_1 = p1 + 4.8;
    p_2 = 4.8 + p2;
    cout << p_0;
    cout << p_1;
    cout << p_2;
    return 0;
}