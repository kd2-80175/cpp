#include<iostream>
using namespace std;
class date{
    private:
    int day,month,year;
    public:
    date(){
        cout<<"under the date default constructor"<<endl;
        this->day=0;
        this->month=0;
        this->year=0;
    }
    date(int day,int month,int year){
        cout<<"under the date constructor"<<endl;
        this->day=day;
        this->month=month;
        this->year=year;
    }
    int get_day(){
        return this->day;
    }
    void setday(int day){
        this->day=day;
    }
    int get_month(){
        return this->month=month;
    }
    void set_month(int month){
        this->month=month;
    }
    int get_year(){
     return this->year;
    }
    void set_year(int year){
        this->year=year;
    }
    void display(){
        cout<<day<<"/"<<month<<"/"<<year<<"/"<<endl;
    }
    bool is_leap_year(int year){
    if(year%400==0 && year%4==0 && year%100!=0){
        return true;
    }
   else return false;
 }
    void accept(){
        cout<<"enter the day:";
        cin>>day;
        cout<<"enter the month:";
        cin>>month;
        cout<<"enter the year:";
        cin>>year;
        if(is_leap_year(year)==true){
            cout<<year<<"this is a leap year"<<endl;
        }
        else cout<<year<<"this is not a leap year"<<endl;
    
    }
 
};
class person
        {
private:
    string name;
    string addr;
    date birth_date;
public:
    person()
    {
        cout<<"under the p con"<<endl;
        this->name="";
        this->addr="";
    }
    person(string name,string addr,int day,int month,int year):birth_date(day,month,year)
    {
        this->name=name;
        this->addr=addr;
    }
    string get_name()
    {
        return this->name;
    }
    void set_name(string name)
    {
        this->name=name;
    }
    string get_addr()
    {
        return this->addr;
    }
    void set_addr(string addr)
    {
        this->addr=addr;
    }
    date get_birth_date()
    {
        return this->birth_date;
    }
    void set_birth_date(date birth_date)
    {
        this->birth_date=birth_date;
    }
    void accept()
    {
        cout << "Enter Name = ";
        cin >> this->name;
        cout << "Enter Address = ";
        cin >> this->addr;
        cout << "Enter Date Of Birth = " << endl;
        birth_date.accept();
    }
    void display()
    {
        cout << "NAME = " << this->name << endl;
        cout << "ADDRESS = " << this->addr << endl;
        cout << "DATE OF BIRTH = ";
        birth_date.display();
    }
    
};
class employee:public person{
int id;
float sal;
string dept;
date joining;
public:
employee(){
    cout<<"under the emp default const"<<endl;
    id=0;
    sal=0000;
    dept="hr";
}
employee(string name,string addr,string dept,date joining,int id,float sal,date birth_date){
this->id=id;
this->sal=sal;
this->dept=dept;
this->set_name(name);
this->set_addr(addr);
this->set_joining_date(joining);
this->set_birth_date(birth_date);
}
int get_id()
    {
        return this->id;
    }
    void set_id(int id)
    {
        this->id=id;
    }
    float get_sal()
    {
        return this->sal;
    }
    void set_sal(float sal)
    {
        this->sal=sal;
    }
    string get_dept()
    {
        return this->dept;
    }
    void set_dept(string dept)
    {
        this->dept=dept;
    }
    date get_joining_date(){
        return this->joining;
    }
    void set_joining_date(date joining){
  this->joining=joining;
    }
    void accept(){
        cout<<"enter the id:";
        cin>>this->id;
        cout<<"enter the sal:";
        cin>>sal;
        cout<<"enter the deptartment:";
        cin>>dept;
        joining.accept();
        person::accept();
    }
    void display(){
        cout<<"the id:"<<this->id<<endl;
         cout << "SALARY = " << this->sal << endl;
        cout << "DEPARTMENT = " << this->dept << endl;
        cout << "DATE OF JOINING = ";
        joining.display();
         person::display();
    }
    };
    
int main ()
{
    employee e1;
    e1.accept();
    e1.display();
    


}
