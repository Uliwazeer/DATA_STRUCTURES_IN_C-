#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *top = NULL;

void display();
void push(int value);
int pop();
int peek();

int main()
{
    insertNode(5);
    insertNode(10);
    insertNode(15);
    insertNode(7);
    display();
    deleteNode(15);
    display();
    push(5);
    display();
    pop();
    display();
    display();
    cout << "top = " << peek();
    return 0;
}



void insertNode(int value)
{
    node *new_node, *last;
    new_node = new node;
    new_node->data = value;
    if (top == NULL)
    {
        top = new_node;
        new_node->next = NULL;
    }
    else
    {
        last = top;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
        new_node->next = NULL;
    }
}

void display()
{
    node *current_node;
    if (top == NULL)
    {
        cout << "stack underflow";
    }
    else
    {
        current_node = top;
        while (current_node != NULL)
        {
            cout << current_node->data << "\n";
            current = current->next;
        }
    }
    cout << endl;
}

// how to delete a value by this code
void deleteNode(int value)
{
    node *curent, *previous;
    curent = top;
    previous = top;

    if (curent->data == value)
    {
        top = curent->next;
        free(curent); // this permission delete the element from memory
        return;
    }

    while (curent->data != value)
    {
        previous = curent;
        curent = curent->next;
    }
    previous->next = curent->next;
    free(curent);
}

void push(int value)
{
    node *new_node = new node;
    new_node->data = value;
    new_node->next = top;
    top = new_node;
}

int pop()
{
    int value;
    if (top == NULL)
    {
        cout << "stack underflow. \n";
        return -1;
    }
    else
    {
        node *first_node = top;
        top = first_node->next;
        value = first_node->data;
        delete (first_node);
        return value;
    }
}

int peek()
{
    if (top == NULL)
    {
        cout << "stack underflow. \n";
        return -1;
    }
    else
    {
        return top->data;
    }
}

// void delete_end(){
//             if (top == NULL){
//                 cout<<"Linked List Is Empty. \n";
//             }
//             else if(top->next == NULL){
//                 delete(top);
//                 top = NULL;
//             }
//             else{
//                 node* ptr = top;
//                 while (ptr->next->next != NULL)
//                 {
//                         ptr = ptr->next;
//                 }
//                 delete(ptr->next);
//                 ptr->next = NULL;

//             }
// }
