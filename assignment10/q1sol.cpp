#include<iostream>
using namespace std;
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
Stack s1(5);
s1.push(5);
s1.peek();


}
