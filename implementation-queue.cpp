#include <iostream>
#include <cassert>
#include <string>
using namespace std;
//const int MAX_LENGTH=100;
template<class t> <T> 
class arrayQueueType
{
    int rear;
    int front;
    int length;
    t *arr;
    int maxSize;
public:
    arrayQueueType(){
        if (size <= 0)
        maxSize = 100;
        else
        maxSize = size;
        front = 0;
        arr = new t[maxSize];
        rear = maxSize - 1;
        length = 0;
    }
    int isEmpty(){
        return length == 0;
    }
    bool isFull(){
        return length == maxSize;
    }
    void addQueue(t Element){
        if (isFull()){
            cout <<"Queue Full Can Not Enqueue.......!!";
        }
        else{
            rear = (rear + 1) % maxSize;
            arr[rear] = Element;
            length++;
        }

    }
    void deleteQueue(){
        if (isEmpty()){
            cout << "Empty Queue Can Not Dequeue....!";
        }
        else{
            front = (front +1) % maxSize;
            --length;
        }

    }
        int frontQueue(){
            assert(!isEmpty());
             return arr[front];
        }    
        int rearQueue(){
            assert(!isEmpty());
            return arr[rear];
        }
        void printQueue(){
            if(!isEmpty()){
            for (size_t i = front; i != rear; i=(i+1)% maxSize)
            {
                cout << arr[i]<<" ";
            }
            cout << arr[rear];   
        }
        else
        cout << "Empty Queue"; 
        }
        int QueueSearch(t Element){
            int pos = -1;
            if(!isEmpty()){
                for (int i = front; i !=rear; i = (i+1) % maxSize)
                if (arr[i] == element)
                {
                    pos = i;
                    break;
                }
                if(pos == -1){
                    if (arr[rear] == element)
                        pos = rear;
                    
                }

            }
            else
            cout << "Q Is Empty !"<< endl;
            return pos;
        }
        
};
int main(){
    arrayQueueType<string>q1(5);
    q1.addQueue(5);
    q1.addQueue(30);
    q1.addQueue(35);
    q1.addQueue(40);
    q1.addQueue(45);
    q1.addQueue(50);
    cout << q1.QueueSearch(50) <<endl;
        cout << q1.rearQueue();
    q1.printQueue();
        return 0;
}
