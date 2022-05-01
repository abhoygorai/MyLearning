#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class Queue 
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
            cout<<(char)(p->data)<<endl;
            p=p->next;
        }
    }
};

int main()
{
    Queue q1, q2, q3;

    int size;
    cout<<"Enter the size: "; cin>>size;
    char element;
    int priority;
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element: "; 
        cin>>element;
        cout<<"Enter priority: ";
        cin>>priority;

        if(priority == 1)
        {
            q1.enqueue(element);
        }
        else if(priority == 2)
        {
            q2.enqueue(element);
        }
        else if(priority == 3)
        {
            q3.enqueue(element);
        }
    }
    cout<<endl<<endl;
    q1.Display();cout<<endl;
    q2.Display();cout<<endl;
    q3.Display();cout<<endl;

    return 0;
}