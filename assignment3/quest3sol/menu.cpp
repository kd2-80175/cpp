#include "./menu.h"
#include<iostream>
using namespace std;
Emenu menu(){
    int choice;
cout<<"***********************"<<endl;
cout<<"0 EXIT"<<endl;
cout<<"1 Accept"<<endl;
cout<<"2 DISPLAY_rh"<<endl;
cout<<"3 SetRadius"<<endl;
cout<<"4 SetHeight"<<endl;
cout<<"5 Print_vol"<<endl;
cout<<"enter your choice";
cin>>choice;
cout << "*******************" << endl;
return Emenu(choice);

}