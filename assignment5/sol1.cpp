#include<iostream>
using namespace std;
class student{
private:
int roll_no;
string name;
char gender;
int marks1,marks2,marks3;

public:

void accept(){
cout<<"enter name";
cin>>this->name;
cout<<endl;
cout<<"enter roll_no:";
cin>>this->roll_no;
cout<<"enter gender from M and F:\t";
cin>>this->gender;
cout<<"enter marks in sub 1:\t";
cin>>this->marks1;
cout<<"enter marks in sub 2:\t";
cin>>this->marks2;
cout<<"enter marks in sub 3:\t";
cin>>this->marks3;
}
void print(){
    cout<<"student name:"<<name<<endl;
    cout<<"roll_no:"<<roll_no<<endl;
    cout<<"gender:"<<gender<<endl;
    cout<<"marks1:"<<marks1<<endl;
    cout<<"marks2:"<<marks2<<endl;
    cout<<"marks3:"<<marks3<<endl;

}
int getrollnumber(){
    return roll_no;
}
void setroll(int roll){
    roll_no=roll;
}
friend void sortRecords(student arr[]);

};
 void sortRecords(student arr[]){
for(int i=0;i<3-1;i++){
    int x=0;
for(int j=0;j<3-i-1;j++){
    if(arr[j].getrollnumber() > arr[j+1].getrollnumber()){
          int temp=arr[j].getrollnumber();
          arr[j].setroll(arr[j+1].getrollnumber());
          arr[j+1].setroll(temp) ;
         x=1;

    }
    if(x==0){
        break;
    }
}
}
for(int i=0;i<3;i++){
    
        cout<<"after sorting"<<"\t"<<arr[i].roll_no;
    
}
}
int searchRecords(student arr[]){
    int rollno;
    
    cout<<"enter the roll num you want to check:";
    cin>>rollno;
    for(int i;i<3;i++){
    if(rollno==arr[i].getrollnumber()){
        return i;
    }}
} 


int main(){

 student s1[3];
s1[0].accept();
s1[1].accept();

s1[2].accept();

//cout<<"check"<<searchRecords(s1);
sortRecords(s1);
}