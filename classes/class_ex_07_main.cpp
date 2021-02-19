#include "class_ex_07.h"

using namespace std;
int main()
{
    Test_0 t0(1,2,3);
    Test t1(7,8,9,10), t2(t0,4);
    t1.displ();
    t2.displ();
    return 0;
}