#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

class Linkedlist : public Node 
{
    public:
    Node * first;
    Node * t;
    Node * last;
    void Create(int A[], int n)
    {   first = new Node;
        first->data = A[0];
        first->next = NULL;
        last = first;

        for(int i = 1; i < n; i++)
        {
            t = new Node;
            t->data = A[i];
            t->next = NULL;
            last->next = t;
            last = t;
        }
    }
    void Display()
    {
        Node*p = first;
        while(p!= NULL)
        {
            cout<<p->data<<endl;
            p=p->next;
        }
        
    }

    void Insert(int x, int pos)
    {
        Node *t = new Node;
        Node *p = new Node;
        p = first;
        t->data = x;

        for(int i = 0; i<pos-1; i++)
        {
            p=p->next;
        }

        t->next = p->next;
        p->next = t;
    }
    void InsertLast(int x)
    {
        Node *t = new Node;
        t->data = x;
        t->next = NULL;
        if(first == nullptr) 
        {   
            first = t;
            last = t;
        }
        else 
        {
            last -> next = t;
            last = t;
        }
            
    }
};

int main()
{
    Linkedlist l;
    int arr[] = {2, 5, 7, 8};
    l.Create(arr, 4);
    l.InsertLast(11);
    l.Display();


    return 0;
}