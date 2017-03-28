#ifndef J1_H_INCLUDED
#define J1_H_INCLUDED

/*
class Point {
public:
double x, y;
Point(double nx, double ny);
};
*/
class Vehicle{
private:
    const char *license;
    int year;
public:
    Vehicle(const char mylicense[],const int myyear);
};

class Car{
private:
    const char * style;
public:
    Car(const char mylicense[],const int myyear,const char mystyle[]);

};
#endif // J1_H_INCLUDED

