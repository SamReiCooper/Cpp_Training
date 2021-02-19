#ifndef _DET_
#define _DET_
#include <string>
#include <iostream>
using namespace std;

class Det
{
    private:
        string name;
        int num;
    public:
        Det(const string& d_name, int d_num)
        {
            name = d_name;
            num = d_num;
        }
        ~Det(){}
        void display();
        const string& getname(){return name;} //access
        int getnum(){return num;}            //methods

};
inline void Det::display()
{
    cout << "The detail's nama is " << name << ". Their number: " << num << endl;
}

#endif