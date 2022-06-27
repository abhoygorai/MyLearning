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
    
    int Count()
    {
        Node*p = first;
        int count = 0;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        return count;
    }

    int Count2(Node *p)
    {
        if(p)
            return 1+Count2(p->next);
        else 
            return 0;
    }
};

int main()
{
    Linkedlist l;
    int arr[] = {2, 5, 7, 8};
    l.Create(arr, 4);
    cout<<l.Count2(l.first);


    return 0;
}