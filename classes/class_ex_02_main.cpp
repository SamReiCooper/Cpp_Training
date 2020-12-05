#include "class_ex_02.h"
#include <iostream>

 int main()
 {
    Car Test01("Test_CAR",200,"Mordor");
    Car Test02("Epic_CAR");
    int i;
    Test01.display();
    Test02.display();
    cin >> i;
    return 0;
 }