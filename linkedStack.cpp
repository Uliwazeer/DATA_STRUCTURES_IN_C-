#include <iostream>
#include <string>
using namespace std;
template<class t> <T>
class stack{
        struct node{
            t item; 
            node *next;
        };
        node *cur;
public:
        stack(){
            top = NULL;
        }
        void push(t nemItem){
            node *nemItemPtr = nem node;
            if(nemItemPtr==NULL)
            cout << "Stack Push Can Not Allocate Memory";
            else{
                nemItemPtr->item = nemItem;
                nemItemPtr->next = top;
                top = nemItemPtr;
            }
        }
        bool isEmpty(){
            return top == NULL;
        }
        void pop(){
            if(isEmpty())
            cout << "Stack Empty On Pop";
            else{
                node*temp = top;
                top = top->next;
                temp = temp->next = NULL;
                delete temp;
            }
        }
         void pop(t&stackTop){
            if(isEmpty())
            cout << "Stack Empty On Pop";
            else{
                stackTop = top->item;
                node*temp = top;
                top = top->next;
                temp = temp->next = NULL;
                delete temp;
            }
             void getTop(t&stackTop){
            if(isEmpty())
            cout << "Stack Empty On Pop";
            else{
              stackTop = top->item;
            }
            void display(){
                    cur = top;
                    cout << "\nItems In The Stack : ";
                    cout << "[";
    
                    while(cur !=NULL){
                            cout << cur->item<<" ";
                            cur = cur->next;
                    }
                    cout << "]\n";
            }
};
int main(){  
    stack<string>s;

     s.push("ULI");
        s.push("NOOR");
        s.push("WAZEER");
        s.push("MUHAMMED");
        s.push("ABAD");
        s.push("ALI");
        s.push("ALY");
        s.pop();
         s.display();
        int x=0;
        s.getTop(x);
        cout << x << endl;
       


}