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
    Node * first = NULL;
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

    void InsertSorted(int x)
    {
        Node *q = NULL, *p = first;
        Node *t = new Node;
        
        t->data = x;
        t->next = NULL;

        if(first == NULL)
        {
            first = new Node;
            first = t;
        }
        else
        {
            while(p && p->data < x)
            {
                q=p;
                p=p->next;
            }

            if(p == first)
            {
                t->next = first;
                first = t;
            }
            else
            {
                t->next = p;
                q->next = t;
            }
        }
    }
};

int main()
{
    Linkedlist l;
    int arr[] = {2, 5, 7, 8};
    l.Create(arr, 4);
    l.InsertSorted(6);
    l.Display();


    return 0;
}