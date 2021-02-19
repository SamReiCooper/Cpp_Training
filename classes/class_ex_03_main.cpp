#include "class_ex_03.h"
#include <cstdlib>
using namespace std;

int main()
{
    Det d1("d1", 100), d2(d1.getname(),d1.getnum());
    d1.display();

    d2.display(); //d2 has accessed 
                 //private members of d1
    return 0;
}