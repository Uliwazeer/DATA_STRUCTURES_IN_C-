#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 100;
template <class t> <T>
class stack{
    int top;
    t item[MAX_SIZE];
public:
stack():top (-1){}
void push(t Element){
    if (top >= MAX_SIZE - 1){
        cout << "Stack Full On Push";
    }
    else {
    top++;
    item[top] = Element;
    }
}
bool isEmpty()
{
    return top < 0;
}
void pop(){
    if (isEmpty())
    cout << "Stack Empty On Pop";
    else
    top--;
}
void pop(t&Element){
    if (isEmpty())
    cout << "Stack Empty On Pop";
    else{
        Element = item[top];
    top--;
    }
}
void getTop(t&stackTop){
    if (isEmpty())
    cout << "Stack Empty On getTop";
    else{
    stackTop = item[top];
    cout << stackTop << endl;
    }
    }
    void print(){
        cout << "[";
        for (int i =top; i >= 0; i--){
            cout << item[i] << " ";
        }
        cout << "]";
        cout << endl;
    }
};
int main(){
        stack<int> s;
        s.push(5);
        s.push(50);
        s.push(10);
        s.push(40);
        s.push(60);
        s.push(20);
        s.push(90);
        s.pop();
        // int y=0;
        s.print();


        stack<char> s;
        s.push("A");
        s.push("B");
        s.push("H");
        s.push("P");
        s.push("O");
        s.push("V");
        s.push("E");
        s.pop();
        // int y=0;
        s.print();


        stack<string> s;
        s.push("ULI");
        s.push("NOOR");
        s.push("WAZEER");
        s.push("MUHAMMED");
        s.push("ABAD");
        s.push("ALI");
        s.push("ALY");
        s.pop();
        // int y=0;
        s.print();
}