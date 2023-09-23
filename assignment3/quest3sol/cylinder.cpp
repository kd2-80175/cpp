#include "./cylinder.h"
Cylinder::Cylinder(){
    this->radius=1.0;
    this->height=1.0;
}
 Cylinder::Cylinder(double radius,double height){

 }
void Cylinder::getRadius(){
      this->radius;
}
double Cylinder::setRadius(double radius){
    return this->radius=radius;
}
void Cylinder::getHeight(){
    this->height;
}
double Cylinder::setHeight(double height){
    return this->height=height;
}
void Cylinder::getVolume(){
 this->volume;
}
void Cylinder::printVolume(){
volume=3.14 * radius * radius *height;
    cout<<"the volume is:"<<volume;
}
void Cylinder::accept(){
    cout<<"enter radius:";
    cin>>this->radius;
    cout<<"enter height:";
    cin>>this->height;
}
void Cylinder::display_rh(){
    cout<<"the radius is"<<radius<<"\n"<<"the height is"<<height;
}


