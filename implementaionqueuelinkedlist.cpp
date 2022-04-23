#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *front = NULL;
Node *rear = NULL;
void enqueue(int value);
void dequeue();
int peek();
void display();

int main()
{

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();  // will print 1 2 3 4 5
    enqueue(6); // will print queue is print
    dequeue();
    display(); // will print queue 2 3 4 5
    enqueue(6);
    display(); // will print 2 3 4 5 6

    cout << "peek = " << peek();
    return 0;
}

void enqueue(int value)
{
    Node *new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;

    if (front == NULL)
    {
        front = rear = new_node;
    }
    else
    {
        rear->next = new_node;
        rear = new_node;
    }
}

void dequeue()
{
    if (rear == NULL)
    {
        cout << "queue is empty." << endl;
    }
    else if (front == rear)
    {
        Node *ptr = front;
        front = rear = NULL;
        delete (ptr);
    }
    if (front == rear)
    {
        Node *ptr = front;
        front = front->next;
        delete (ptr);
    }
}

int peek()
{
    if (front == NULL)
    {
        cout << "Queue Is Empty." << endl;
        return -1;
    }
    else
    {
        return front->data;
    }
}

void display()
{
    if (front == NULL)
    {
        cout << "Queue Is Empty." << endl;
    }
    else
    {
        Node *current = front;
        while (current != NULL)
        {
            cout << current->data << "\t";
            current = current->next;
        }
        cout << endl;
    }
}