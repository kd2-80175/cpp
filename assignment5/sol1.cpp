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
    
        cout<<"\t"<<arr[i].roll_no;
    
}
}
int searchRecords(student arr[]){
    int rollno;
    
    cout<<"enter the roll num you want to check:";
    cin>>rollno;
    for(int i;i<3;i++){
    if(rollno==arr[i].getrollnumber()){
        return i;
    }    
    }
} 


int main(){

 student s1[3];

int ch;
do{  
    cout<<"***************************"<<endl;
    cout<<"enter 0 for exit"<<endl;
    cout<<"enter 1 for accepting details"<<endl;
    cout<<"enter 2 for printing details"<<endl;
    cout<<"enter 3 for sorting roll no"<<endl;
    cout<<"enter 4 for searching"<<endl;
    cout<<"enter the choice";
    cin>>ch;
  switch(ch){
    case 1:s1[0].accept();
           s1[1].accept();
           s1[2].accept();
    break;

    case 2:s1[0].print();
           s1[1].print();
           s1[2].print();
    break;
    case 3:sortRecords(s1);
    break;
    case 4:cout<<"check"<<searchRecords(s1);
    break;
    default:cout<<"galat choice hai "<<endl;
    break;
  }

}while(ch!=0);

return 0;

}