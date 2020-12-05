#ifndef _DISK_
#define _DISK_
#include <string>
using namespace std;

class Car
{
    private:
        string model;
        int bhp;
        string country;
    public:
        Car(const string&, int, const string&);
        Car(const string&);
        void display();
};
#endif