#include<iostream>
using namespace std;
class Cylinder{
private:
double height;
double radius;
double volume;

public:
Cylinder(){

}
Cylinder(double radius, double height){
    this->radius=radius;
    this->height=height;
}
double getRadius(){
    return this->radius;
}
double setRadius(double radius){
    this->radius=radius;
}
double getHeight(){
return this->height;
}
double setHeight(double height){
    this->height=height;
}
double getVolume(){
return this->volume;
}
double printVolume(){
volume=3.14 * radius * radius *height;
    cout<<"the volume is:"<<volume;
}


};
int main(){
    int a
    
}