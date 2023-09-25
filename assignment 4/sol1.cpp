#include<iostream>
using namespace std;
class Time{
    private:
    int hr ;
    int min;
    int sec;

    public:
Time(){

}
Time(int hr,int min,int sec)
{
    this->hr=hr;
    this->min=min;
    this->sec=sec;

}
int getHour(){
   return this->hr;
}
void setHour(){
    this->hr=hr;
    cout<<"enter hour:";
    cin>>this->hr;

    
    
}
int getMinute(){
    return this->min;
}
void setMinute(){
    this->min=min;
    cout<<"enter min:";
    cin>>this->min;
}
int getSecond(){
    return this->sec;
}
void setSecond(){
this->sec=sec;
  cout<<"enter sec:";
    cin>>this->sec;  
}
void printTime(){
    cout<<"the hour is:"<<this->hr<<endl;
    cout<<"the minute is:"<<this->min<<endl;
    cout<<"the second is:"<<this->sec<<endl;

}

};
int main()
{
    Time **arr=new Time*[5];
    for(int i=0;i<5;i++){
        arr[i]=new Time();
    }
    for(int i=0;i<5;i++){
        
    arr[i]->setHour();
    arr[i]->setMinute();
    arr[i]->setSecond();
 }
 for(int i=0;i<5;i++){
    arr[i]->printTime();
 }
for (int i = 0; i < 5; i++)
        delete arr[i];

        delete[] arr;
        return 0;
}