#include<iostream>
using namespace std;
class Box{
    private:
    int length;
    int width;
    int height;
    int vol;
    public:
    
Box(){

}
    Box(int length,int width,int height){
        this->length=length;
        this->width=width;
        this->height=height;
    }

    void accept(){
        cout<<"length:";
        cin>>length;
        cout<<"width:";
        cin>>width;
        cout<<"height:";
        cin>>height;
    }
void display(){
    cout<<"the length is:"<<length<<"\n";
    cout<<"the width is:"<<width<<"\n";
    cout<<"the height is:"<<height<<"\n";
}
void volume(){
    int vol=length*width*height;
    cout<<"the volume is:"<<vol;

}
};


int main(){
    Box b1;
    Box b2;
    Box b3;
    int ch;
    do{
        cout<<"***************END******************";
        cout<<"select 0 for exit";
        cout<<"select 1 for b1 object";
        cout<<"select 2 for b2 object";
        cout<<"select 3 for b3 object";
        cout<<"enter the choice:";
        cin>>ch;
        
        switch(ch){
       case 1: b1.accept();
               b1.display();
               b1.volume();
        break;       
       case 2: b2.accept();
               b2.display();
               b2.volume();
        break;
        case 3: b3.accept();
                b3.display();
                b3.volume();
        break;        
        }

    }while(ch!=0);
   
return 0;
}
