#ifndef CYLINDER_H
#define CYLINDER_H
#include<iostream>
using namespace std;
class Cylinder
{
private:
double height;
double radius;
double volume;

public:
Cylinder();
Cylinder(double radius,double height);
void accept();
void display_rh();
void getRadius();
double setRadius(double radius);
void getHeight();
double setHeight(double height);
void getVolume();
void printVolume();

};
#endif