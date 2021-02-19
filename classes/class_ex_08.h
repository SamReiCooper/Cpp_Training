#ifndef _CLICL_
#define _CLICL_
#include <iostream>
using namespace std;

class Test_0
{
    private:
        int a, b, c;
    public:
        Test_0(int t_a = 0, int t_b = 0, int t_c = 0)
        {
            a = t_a;
            b = t_b;
            c = t_c;
        }
        ~Test_0(){}
        int sum()
        {
            return a+b+c;
        }
        void display()
        {
            cout << a <<" "<< b << " " << c;
        }
};

class Test
{
    private:
        int d;
        Test_0 t;
    public:
        Test(int t_a, int t_b, int t_c, int t_d)
        :t(t_a, t_b, t_c), d(t_d)
        {}
        Test(Test_0 t_t, int t_d)
        :t(t_t),d(t_d)
        {}
        ~Test(){}
        void displ()
        {
            t.display();
            cout << " " << d << endl;
        }
};

#endif