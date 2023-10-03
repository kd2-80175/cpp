#include<iostream>
using namespace std;
template <class M>
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
template <class T>
class Stack{
    private:
    int top=-1;
    int size;
    
    T *arr;
    public:
    Stack(){
        this->size=3;
        this->arr=new T[3];
    }
    Stack(int size){
       this->size=size;
       this->arr=new int [this->size];
    }
    void push(int e){
  top++;
  arr[top]=e;
    }
    void pop(){
        top--;
    }
    void peek(){
        cout<<"the top element is: "<<this->arr[top];
    }
    bool isfull(){
        if(top==sizeof(arr)){
            return true;
        }
        else return false;
    }
    void isEmpty(){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
        }
        else cout<<"The Stack is not empty "<<endl;
    }
    int *getarr(){
        return this->arr;
    }

};
int main(){
Stack <int> s1(5);
s1.push(5);
s1.peek();
s1.isEmpty();
Stack <int> s2(5);
Stack <box> s3;



}
