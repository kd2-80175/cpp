#include<iostream>
using namespace std;
class employee{
    private :
    int emp_id;
    string name;
    double salary;

    public:
    employee(){
        emp_id=20;
        name="";
        salary=500;
    }
    employee(int emp_id,string name,double salary){
        this->emp_id=emp_id;
        this->name="Ritesh";
        this->salary=8000;
        cout<<emp_id<<"is the id no"<<"\n"<<name<<"is the name"<<"\n"<<"salary"<<salary;
    }
    void accept(){
        cout<<"enter the id no:";
        cin>>emp_id;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter employee salary:";

    }
    void display(){
        cout<<"employee id is:"<<emp_id<<"\n"<<"name:"<<name<<"\n"<<"salary:";
    }
    double getsalary(){
        return salary;
    }
    double setsalary(double salary){
        this->salary=salary;
    }

};
void increment(employee *eptr){
    eptr->setsalary(eptr->getsalary()*10);
    

}
enum emenu{
    Exit,
    Add,
    Display,
    Increment
};
emenu menu(){
    int ch;
cout<<"************END**************";
cout<<"enter 0 for exit "<<"\n";
cout<<"enter 1 for addingdetails"<<"\n";
cout<<"enter 2 for displaying"<<"\n";
cout<<"enter 3 for increment"<<"\n";
cout<<"enter your choice:";
cin>>ch;
}
int main(){
    employee E1;
    emenu choice;
    while((choice=menu()))
    

}