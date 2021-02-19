#include <iostream>
#include "class_ex_05.h"

using namespace std;

void swapg(Test &t1, Test &t2)
{
    Test temp(t1);
    t1 = t2;
    t2 = temp;
}

int main()
{
    Test t1(1, 2, 3);
    Test t2(4, 5, 6);
    t1.swapc(t2);
    t1.display();
    t2.display();
    swapg(t1, t2);
    t1.display();
    t2.display();
    return 0;
}