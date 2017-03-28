#include "j1.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(const char mylicense[],const int myyear)
{
    license=mylicense;
    year=myyear;
    std::cout<<license<<","<<year<<",";
}

Car::Car(const char mylicense[],const int myyear,const char mystyle[])
{
    Vehicle(mylicense,myyear);
    style=mystyle;
    std::cout<<style;
}
