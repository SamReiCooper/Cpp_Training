//Defining class
#ifndef _DISK_
#define _DISK_

#include <iostream>
#include <string>
using namespace std;

class Disk
{
    private:
        string title, band;
        long len;
    public:
        bool init(const string&, const string&, long);
        void display();
};

#endif