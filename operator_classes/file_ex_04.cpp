#include <iostream>

class Test
{
    private:
        double a, b;
    public:
        Test(double i_a=0, double i_b=0)
        {
            a = i_a;
            b = i_b;
        }
        ~Test(){}
        void display()
        {
            std::cout << "From test: " << a << " " << b << std::endl;
        }
        friend class Point;
};

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
        friend Point operator+(Point, Point);
        friend Point operator+(Point, double);
        void show_test(Test a)
        {
            std::cout << "From Point " << a.a << " - " << a.b << std::endl;
        }
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

int main()
{
    Point p1(4,4,4);
    Point p2(4,7,6);
    Point p_0, p_1, p_2;
    Test t(4.444, 4.444);
    t.display();
    p1.show_test(t);
    p_0 = p1 + p2;
    p_0.display();
    p_1 = p1 + 4.8;
    p_2 = 4.8 + p2;
    p_1.display();
    p_2.display();
    return 0;
}