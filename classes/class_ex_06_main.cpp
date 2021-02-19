#include <iostream>
#include "class_ex_06.h"

using namespace std;

const Test& bigger(Test &t1, Test &t2)
{
    if(t1.sum()>=t2.sum())
        return t1;
    else
        return t2;
}

int main()
{
    Test t1(1,2,3), t2(4,5,6);
    Test res(bigger(t1,t2));
    res.display();
    return 0;
}