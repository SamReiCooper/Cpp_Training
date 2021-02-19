#include "class_ex_09.h"

using namespace std;
int main()
{
    Test_0 t0(2,2,2);
    Test t1(8,8,8,8), t2(t0,4);
    t1.set_com(9.247);
    t1.displ();
    t2.displ();
    return 0;
}