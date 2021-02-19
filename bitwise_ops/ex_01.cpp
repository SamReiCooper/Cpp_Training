#include <iostream>

using namespace std;

int main()
{
    unsigned int a = 8;
    a = a<<2; //100 -> 10000
    cout << a << endl;
    a = a & 0b00111; //10000 & 00111 = 0
    cout << a <<endl;
    a = 32;
    a = a | 0b00111; //10000 | 00111 = 10111
    cout << a <<endl;
    a = a ^ 0b00111; //10111 ^ 00111 = 10000
    cout << a << endl;
    return 0;
}