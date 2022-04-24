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

    void Slide()
    {
        Node *q = first; 
        Node *p = q->next;
        while(p!= NULL)
        {
            if(p->data == q->data)
            {
                Node *temp = p;
                q->next = p->next;
                p = temp->next;
                delete temp;
            }
            else
            {
                p=p->next;
                q=q->next;
            }
        }
    }
};

int main()
{
    Linkedlist l;
    int arr[] = {2, 5, 5, 6, 7, 7, 8};
    l.Create(arr, 7);
    l.Display();
    l.Slide();
    cout<<endl;
    l.Display();
    // l.Display();


    return 0;
}