#ifndef _COMP_
#define _COMP_
#include <iostream>
using namespace std;

class Test
{
    private:
        int a, b, c;
    public:
        Test(int t_a = 0, int t_b = 0, int t_c = 0)
        {
            a = t_a;
            b = t_b;
            c = t_c;
        }
        ~Test(){}
        int sum()
        {
            return a+b+c;
        }
        void display()
        {
            cout << a << " " << b << " " << c << endl;
        }
};

#endif