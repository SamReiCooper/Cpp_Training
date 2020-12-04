#include "class_ex_01.h"
#include <iostream>
#include <iomanip>
using namespace std;

bool Disk::init(const string& d_title, const string& d_band, long d_len)
{
    if(d_title.size() < 1)
        return false;
    title = d_title;
    band = d_band;
    len = d_len;
    return true;
}

void Disk::display()
{
    cout << "The song: " << title << " by " << band <<". Lenght: " << len <<endl;
}