#include <iostream>
using namespace std;
int main(){
void insertFirst(Type item)
{
    Node*newNode = nem Node;
    newNode->item = item;
    if(count == 0){
        first = last = newNode;
        newNode->next = newNode->prev=NULL;

    } else newNode->next = first;
    newNode->prev = NULL;
    first->prev = newNode;
    first = newNode;
}
}