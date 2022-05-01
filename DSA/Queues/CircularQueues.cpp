#include <bits/stdc++.h>
using namespace std;

class CircularQueue
{
public:
    int size;
    int front;
    int rear;
    int *Q;  

    CircularQueue(int sz) 
    {
        Q = new int[sz];
        size = sz;
        front = -1;
        rear = -1; 
    }
    
    void enqueue(int x)
    {
        if((rear+1)%size == front)
            cout<<"Queue is full"<<endl;
        else
        {
            rear=(rear+1)%size;
            Q[rear] = x;
        }
    }
    
    int dequeue()
    {
        int x=-1;
        if(front == rear)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            front=(front+1)%size;
            x = Q[front];
            
        }
        return x;
    }

};

int main()
{
    CircularQueue q(5);
    q.enqueue(2);
    q.enqueue(1);
    q.enqueue(6);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 0;
}