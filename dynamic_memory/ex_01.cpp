#include <cstdlib>
#include <iostream>

int main()
{
    double *ptr, *ptr2;
    ptr = new double;
    ptr2 = new double(8.00);
    *ptr = 2;
    std::cout << *ptr << std::endl;
    std::cout << *ptr2 << std::endl;
    delete ptr;
    delete ptr2;
    return 0;
}