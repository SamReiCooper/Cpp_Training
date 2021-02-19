#include <iostream>

using namespace std;

class Test
{
    private:
        double a,b,c;
    public:
        Test(double i_a=0, double i_b=0, double i_c=0)
        {
            a = i_a;
            b = i_b;
            c = i_c;
        }
        ~Test(){}
        void display()
        {
            cout << "("<<a<<","<<b<<","<<c<<")"<<endl;
        }
        void t_set(double i_a, double i_b, double i_c)
        {
            a = i_a;
            b = i_b;
            c = i_c;
        }
        double get_a() {return a;}
        double get_b() {return b;}
        double get_c() {return c;}
};

class S_Test: public Test
{
    private:
        double d, e, f;
    public:
        S_Test(double i_a, double i_b, double i_c, double i_d, double i_f, double i_e)
        {
            this->t_set(i_a, i_b, i_c);
            d = i_d;
            f = i_f;
            e = i_e;
        }
        ~S_Test(){}
        double get_d() {return d;}
        double get_e() {return e;}
        double get_f() {return f;}
        void display()
        {
            cout << "("<<this->get_a()<<","<<this->get_b()<<","<<this->get_c()<<")"<<endl;
            cout << "("<<d<<","<<e<<","<<f<<")"<<endl;
        }
};

int main()
{
    Test t0(4,4,4);
    S_Test t(7,7,7,8,8,8);
    t0.display();
    cout<<"\n";
    t.display();
    return 0;
}