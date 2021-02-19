#include <iostream>
#include <cstdlib>

using namespace std;

class Test
{
    private:
        float *f;
        int max_el;
    public:
        Test(int i_max)
        {
            int i;
            max_el = i_max;
            f = new float[i_max];
            for(i=0;i<i_max;i++)
                f[i] = i;
        }
        Test(Test& t)
        {
            int i;
            max_el = t.max_el;
            f = new float[max_el];
            for(i=0;i<max_el;i++)
                f[i] = i;
        }
        ~Test()
        {
            delete[] f;
        }
        void display()
        {
            int i;
            cout << "(";
            for(i=0;i<max_el;i++)
                cout<<i<<",";
            cout << ")" << endl;
        }
};

int main()
{
    Test t(10);
    Test tt(t);
    t.display();
    tt.display();
    return 0;
}