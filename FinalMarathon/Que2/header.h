#ifndef HEADER_H
#define HEADER_H

#include<iostream>
class Conversion
{
    float xdistance;
    float ydistance;
    int arr[5];
    public:
    Conversion();
    Conversion(Conversion&);
    Conversion(float x, float y, int arr);
    float get_x();
    float get_y();
    void set_x(float);
    void set_y(float);
    Conversion operator+(Conversion& );
    friend Conversion operator+(int x, Conversion &c1);
    Conversion &operator++();
    Conversion operator++(int);
    float operator[](int );
    Conversion operator==(Conversion &r3);
    float operator()();
    void display();
    void set_arr();
    void display_arr();
    //~Conversion();

};
#endif // HEADER_H



