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
            cout<<p->data  <<endl;
            p=p->next;
        }
        
    }

    bool CheckSort()
    {
        Node *p = first;
        Node *q = p->next;
        while(q != NULL)
        {
            if(p->data >= q->data)
                return false;
            else
            {
                p = p->next;
                q = q->next;
            }
        }
        return true;
    }
};

int main()
{
    Linkedlist l;
    int arr[] = {2, 5, 4, 8};
    l.Create(arr, 4);
    cout<<l.CheckSort();
    // l.Display();


    return 0;
}