#include<iostream>
using namespace std;
class factorial{
    private:
    int num;
    int fact=1;
    public:
    factorial(){
 this->num=0;
    }
    factorial(int num){
        this->num=num;
    }
    void accept(){
        cout<<"enter the number: ";
        cin>>num;
    }
    void calfact(){
        if(num<=0){
            throw 2;
        }
        else
        {
        for(int i=num;i>0;i--){
          fact=fact*i;
        }
        cout<<"the factorial is: "<<fact<<endl;
        }
        }
};
int main(){
    factorial f1;
    f1.accept();
    try{
        f1.calfact();
    }
    catch(int error){
   cout << "Something went wrong..." << endl;
    }
    cout<<"succesful execution";
    return 0;
}