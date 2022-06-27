#include <bits/stdc++.h>
#include <unistd.h>
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
    void RDisplay(Node *p)
    {
        if(p!= NULL)
        {
            cout<<p->data<<endl;
            usleep(500000);
            RDisplay(p->next);
        }       
    }
};

int main()
{
    Linkedlist l;
    int arr[] = {2, 5, 7, 8};
    l.Create(arr, 4);
    l.RDisplay(l.first);


    return 0;
}