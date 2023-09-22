#include<iostream>
using namespace std;
class Student{
    private:
    int roll_no;
     string name;
    int marks;

    public:
    void initStudent(){
        roll_no=92;
        name="default";
        marks=100;
        cout<<"mission accomplish";

    }
    void printStudentOnConsole(){
        cout<<"roll no:"<<roll_no<<"\n";
        cout<<"name:"<<name<<"\n";
        cout<<marks;

}
void acceptStudentFromConsole(){
cin>>roll_no>>name>>marks;
cout<<"the roll no:"<<roll_no<<"\n"<<"name"<<name<<"\n"<<"marks"<<marks<<"\n";

}

};
int main(){
    int a;
    Student S1;
    do{
        cout<<"press 1 for init"<<"\n";
        cout<<"press 2 for printstudent"<<"\n";
        cout<<"press 3 for acceptstudent"<<"\n";
        cout<<"press 0 for exit"<<"\n";
        cout<<"enter the choice: \t";
        cin>>a;
        switch(a){
            case 1:S1.initStudent();
            break;
            case 2:S1.printStudentOnConsole();
            break;
            case 3:S1.acceptStudentFromConsole();
            break;
        }
    }while(a!=0);
}
