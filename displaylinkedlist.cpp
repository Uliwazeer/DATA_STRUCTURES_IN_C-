#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;
void insertNode(int value);
void display();
void deleteNode(int value);
void insert_beg(int value);
void delete_beg();
void delete_end();


int main()
{
    insertNode(5);
    insertNode(10);
    insertNode(15);
    insertNode(7);
    display();
    deleteNode(15);
    display();
    insert_beg(5);
    display();
    delete_beg();
    display();
    delete_end();
    display();

    return 0;
}
void insertNode(int value)
{
    node *new_node, *last;
    new_node = new node;
    new_node->data = value;
    if (head == NULL)
    {
        head = new_node;
        new_node->next = NULL;
    }
    else
    {
        last = head;
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
    if (head == NULL)
    {
        cout << "Linked List Is Empty";
    }
    else
    {
        current_node = head;
        while (current_node != NULL)
        {
            cout << current_node->data << "\t";
            current_node = current_node->next;
        }
    }
    cout << endl;
}

// how to delete a value by this code
void deleteNode(int value)
{
    node *curent, *previous;
    curent = head;
    previous = head;

    if (curent->data == value)
    {
        head = curent->next;
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

void insert_beg(int value)
{
    node *new_node = new node;
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}

void delete_beg(){
    if(head == NULL){
        cout<< "linked list is empty. \n";
    }
    else{
        node* first_node = head;
        head = first_node->next;
        delete(first_node);
    }
}

void delete_end(){
            if (head == NULL){
                cout<<"Linked List Is Empty. \n";
            }
            else if(head->next == NULL){
                delete(head);
                head = NULL;
            }
            else{
                node* ptr = head;
                while (ptr->next->next != NULL)
                {
                        ptr = ptr->next;
                }
                delete(ptr->next);
                ptr->next = NULL;

            }
}
