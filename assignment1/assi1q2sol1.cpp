#include<iostream>
using namespace std;
class Date{
    private:
    int day;
    int month;
    int year;
    
    public:
    void initDate(){
        cout<<"Initialize";
        day=2;
        month=2;
        year=2001;
        cout<<"success \n";

    }
    void printDateOnConsole(){
 cout<<day<<"/"<<month<<"/"<<year;
    }
    void acceptDateFromConsole()
    {
        cin>>day>>month>>year;
cout<<day<<"/"<<month<<"/"<<year;
    }
    bool isLeapYear(){
        if((year%400==0)||(year%100!=0)&&(year%4==0)){
        cout<<"yes";
            return true;
            
        }
         cout<<"no";
        return false;
        
    }
    
    
};
int main(){
    Date d1;
    int a;
    
    do{
       cout<<"press 1 for init"<<"\n";
       cout<<"press 2 for print"<<"\n";
       cout<<"press 3 for accept"<<"\n";
       cout<<"press 4 for leapyear"<<"\n";
       cout<<"press 0 for exit"<<"\n";
       cout<<"enter the choice"<<"\n";
       cin>>a;
       switch(a){
        case 1: d1.initDate();
        break;
        case 2: d1.printDateOnConsole();
        break;
        case 3: d1.acceptDateFromConsole();
        break;
        case 4: d1.isLeapYear();
        break;

       }
    }while(a!=0);
    return 0;
}