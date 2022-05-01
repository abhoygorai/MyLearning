#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class Queue : public Node
{
public:
    Node *front = NULL;
    Node *rear = NULL;

    void enqueue(int x)
    {
        Node *t = new Node;
        if(t==NULL)
            cout<<"Queue is full"<<endl;
        else
        {
            t->data = x;
            t->next = NULL;
            if(front == NULL)
            {
                front = t;
                rear = t;
            }
            else
            {
                rear->next = t;
                rear = t;
            }
        }
    }

    int dequeue()
    {
        int x = -1;
        Node *p;

        if(front == NULL)
            cout<<"Queue is empty"<<endl;
        else
        {
            p = front;
            front = front->next;
            x = p->data;
            free(p);
        }
        return x;
    }
    
    void Display()
    {
        Node *p = front;
        while(p)
        {
            cout<<p->data<<endl;
            p=p->next;
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(2);
    // q.Display();
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    


    return 0;
}