#include<iostream>
using namespace std;
class Stack{
private:
int top;
int size;
int num;
int *array;
public:
Stack(){
     this->top=-1;
     this->size=5;
    this ->array=new int[size];
}
void push(){
    if(top>size-1){
        cout<<"stack is full";
    }
    else {
        cout<<"the stack is empty plz enter:";
        cin>>this->num;
        top++;
    array[top]=num;

 }
}
void print(){
for(int i=0;i<5;i++)
    cout<<"the numbers in array"<<this->array[i]<<endl;
}


void pop(){
    array[this->top]=0;
    top--;
}
void peek()
{
    cout<<"the value at top"<<array[top]<<endl;
}
void isEmpty(){
if(array[top]<array[size-1]){
    cout<<"the stack is empty";
}
}
 void isFull(){
if(top=size-1){
    cout<<"the stack is full"<<endl;
}
 }
 ~Stack(){
    delete this->array;
    this->array=NULL;
 }
};
int main(){
Stack s1;
for(int i=0;i<5;i++){
    s1.push();
}

s1.print();

    s1.peek();
 s1.isFull();
    s1.pop();

    s1.isEmpty();

   


return 0;
}