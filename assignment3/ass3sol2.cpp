#include<iostream>
using namespace std;
class tollbooth{
    private:
    int ncar;
    int pcar;
    int total;
    double cost;

    public:
    tollbooth(){
        this->ncar=0;
        this->pcar=0;
        this->cost=0;
    }
    void payingCar(){
        
        pcar=pcar+1;
        cost=cost +0.5;
         cout<<"car passed"<<this->pcar<<"\n";
         cout<<"cost:"<<this->cost;

    }
    void nopayCar(){
    ncar=ncar+1;
    cost=cost+0;
    cout<<"car passed"<<this->pcar<<"\n";
    cout<<"cost:"<<this->cost;
    }
    void printOnConsole(){
  total=ncar+pcar;
  cout<<"total is :"<<total<<"\n";
  cout<<"cost:"<<cost;

    }
};
int main(){
    tollbooth t1;
    int ch;
    do{
        cout<<"**************END**************"<<"\n";
        cout<<"press 0 for EXIT";
        cout<<"press 1 for passing car";
        cout<<"press 2 for no passing car";
        cout<<"passing 3 for printing";
        cout<<"enter choice:";
        cin>>ch;
        switch(ch){
            case 1: t1.payingCar();
            break;
            case 2: t1.nopayCar();
            break;
            case 3: t1.printOnConsole();
            break;
            default: cout<<"wrong choice thanku";
                   
        }
    }while(ch!=0);
    return 0;
}