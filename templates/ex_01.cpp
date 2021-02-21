#include <iostream>
#include <cstdlib>

template<class T> class T_Point
{
    private:
        T x,y,z;
    public:
        T_Point(T i_x=0, T i_y=0, T i_z=0)
        {
            x = i_x;
            y = i_y;
            z = i_z;
        }
        ~T_Point(){};
        void display()
        {
            std::cout<<"("<<x<<","<<y<<","<<z<<")"<<std::endl;
        }
        T get_x()
        {
            return x;
        }
        T get_y()
        {
            return y;
        }
        T get_z()
        {
            return z;
        }
        T_Point<T> *operator=(T_Point *e)
        {
            *this = e;
            return this;
        }
        T_Point<T> operator+(T_Point<U> s)
        {
            T_Point<T> out(x + s.get_x(), y + s.get_y(), z + s.get_z());
            return out;
        }
};

int main()
{
    T_Point<int> p_i(2,2,2);
    T_Point<int> p_r;
    p_r = p_i + p_i;
    p_r.display();
    return 0;
}

