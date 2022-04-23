#include <iostream>
using namespace std;
#define size 5
int stack[size], top = -1;
void push(int value);
int pop();
int peek();
void display();

int main(){

        push(5);
        push(10);
        push(20);
        display();
        pop();
        display();
        cout<< "peek = "<<peek()<<endl;
        display();

    return 0;
}

void push(int value){
    if(top == size - 1){
        cout<<"stack overflow"<<endl;
    }
    else{
        top++;
        stack[top] = value;
    }
}

int pop(){
    if(top == -1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        return stack[top--];
    }
}

int peek(){
    if(top == -1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        return stack[top];
    }
}

void display(){
    if(top == -1){
        cout<< "stack underflow" <<endl;
    }
    else{
        for(int i = top; i>=0; i--){
            cout<<stack[i] << endl;
        }
    }
}