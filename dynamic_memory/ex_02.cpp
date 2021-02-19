#include <iostream>
#include <cstdlib>

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
        void set(double i_x, double i_y, double i_z)
        {
            x = i_x;
            y = i_y;
            z = i_z;
        }
        void display()
        {
            std::cout<<"("<<x<<","<<y<<","<<z<<")"<<std::endl;
        }
        double get_x()
        {
            return x;
        }
        double get_y()
        {
            return y;
        }
        double get_z()
        {
            return z;
        }
        Point operator+(Point p)
        {
            Point out(x+p.get_x(), y+p.get_y(), z+p.get_z());
            return out;
        }
};

int main()
{
    Point *p, *p2, *p3, *parr;
    p = new Point(2,2,2);
    p2 = new Point(7,7,7);
    p3 = new Point(*p);
    parr = new Point[4];
    int i;
    for(i=0;i<4;i++)
        parr[i].set(i,i,i);
    Point sum(*p+*p2);
    p->display();
    p2->display();
    p3->display();
    sum.display();
    for(i=0;i<4;i++)
        parr[i].display();
    delete p;
    delete p2;
    delete p3;
    delete[] parr;
    return 0;
}