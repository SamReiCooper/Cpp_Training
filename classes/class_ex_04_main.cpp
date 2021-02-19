#include <iostream>
#include "class_ex_04.h"

using namespace std;
int main()
{
    Test t;
    t.set(1, 2, 3);
    cout << t.geta() << endl;
    cout << t.getb() << endl;
    cout << t.getc() << endl;
    return 0;
}