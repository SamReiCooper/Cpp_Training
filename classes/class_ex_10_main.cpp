#include "class_ex_10.h"
#include <iostream>

using namespace std;
int main()
{
    Test t1(1,2,3);
    Test t[10] = {t1, Test(4,5,6)};
    int i;
    for(i=0;i<10;i++)
        t[i].display();
    return 0;
}