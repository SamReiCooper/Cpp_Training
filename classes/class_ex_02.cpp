#include "class_ex_02.h"
#include <iostream>
#include <iomanip>
using namespace std;

Car::Car(const string& c_model, int c_bhp, const string& c_country)
{
    model = c_model;
    bhp = c_bhp;
    country = c_country;
}
Car::Car(const string& c_model)
{
    model = c_model;
    bhp = 0;
    country = "N/A";
}
void Car::display()
{
    cout << "The car's model is " << model << ". Break Horse Power: " << bhp << ". Country of origin: " << country <<endl;
}