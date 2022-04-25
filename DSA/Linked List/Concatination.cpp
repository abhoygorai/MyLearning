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

    void Concatinate(Node *list)
    {
        Node *p = first;
        Node *q = nullptr;
        while(p!=NULL)
        {
            q=p;
            p=p->next;
        }
        q->next = list;
    }
};

int main()
{
    Linkedlist l1, l2;
    int arr[] = {2, 5, 6, 7, 8};
    int arr2[] = {3, 5, 11, 17};
    l1.Create(arr, 5);
    l2.Create(arr2, 4);
    // l1.Display();
    l1.Concatinate(l2.first);
    l1.Display();
    
    
    // l.Display();


    return 0;
}