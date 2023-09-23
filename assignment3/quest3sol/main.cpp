#include "./cylinder.h"
#include "./menu.h"
int main(){
    Cylinder c1;
    Emenu choice;
    while((choice=menu())!=0)
    {
        switch(choice){
            case 1: c1.accept();
            break;
            case 2: c1.display_rh();
            break;
            case 3:c1.setRadius(4.5);
                   
            break;
            case 4:c1.setHeight(6.5);
                   
            break;

            case 5:c1.printVolume();
            break;

            default:cout<<"wrong choice"<<endl;
            break;         
              }
    }
    cout << "Thank you for using our app...:)" << endl;
    return 0;
}