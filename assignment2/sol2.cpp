#include<iostream>
using namespace std;
class Address{

private:
string building;
string street;
string city;
int pin;
public:
void address(){

}
void address(string building,string street,string city,int pin){
cout<<"Lakshmi nivas"<<building<<"\n";
cout<<"Sangee street"<<street<<"\n";
cout<<"karad"<<city<<"\n";
cout<<"801503"<<pin<<"\n";

}
void accept(){
    cout<<"the building is:"<<"\n";
    cin>>building;
    cout<<"street is:"<<"\n";
    cin>>street;
    cout<<"the city is:"<<"\n";
    cin>>city;
    cout<<"Pin Number:"<<"\n";
    cin>>pin;

}
void display(){
    cout<<building<<"\n"<<street<<"\n"<<city<<"\n"<<pin<<"\n";
}
 void setBuilding(string building)
    {
        this->building = building;
    }
    string getBuilding()
    {
        return this->building;
    }
    void setStreet(string street)
    {
        this->street = street;
    }
    string getStreet()
    {
        return this->street;
    }
    void setCity(string city)
    {
        this->city = city;
    }
    string getCity()
    {
        return this->city;
    }
    void setPin(int pin)
    {
        this->pin = pin;
    }
    int getPin()
    {
        return this->pin;
    }
};

int main()
{
    Address s1;
    Address s2;
   // a1.acceptAddress();
    s1.accept();
    s1.display();
    
    s2.setStreet("belly");
    s2.setCity("omg road");
    s2.setPin(77413);
    s2.setBuilding("GEETA BHAVAN");
    cout<<"Building is:"<<s2.getBuilding()<<"\n";
    cout<<"city is"<<s2.getCity()<<"\n";
    cout<<"street is"<<s2.getStreet();



s2.display();
    
    return 0;
}
