#ifndef _ACO_
#define _ACO_
using namespace std;

class Test
{
    private:
        int a, b, c;
    public:
        void set(int c_a, int c_b, int c_c)
        {
            this->a = c_a;
            this->b = c_b;
            this->c = c_c;
        }
        int geta() const {return a;}
        int getb() const {return b;}
        int getc() const {return c;}
};

#endif