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

    void Merge(Node *ptr)
    {
        Node *f = first;
        Node *s = ptr;
        Node *l = NULL;

        while(f!= NULL || s!= NULL)
        {
            if(f->data < s->data)
            {
                l = f;
                f->next = s;
                f=f->next;
            }
            else
            {
                l = s;
                s->next = f;
                s=s->next;
            }
        }
        if(s == NULL)
        {
            Node *temp = f;
            while (f!=NULL)
            {
                temp = f;
                f= f->next;
            }
            l = temp;
            last = l;
        }
        else if(f == NULL)
        {
            Node *temp = s;
            while (f!=NULL)
            {
                temp = s;
                s= s->next;
            }
            l = temp;
            last = l;
        }

    }
};

int main()
{
    Linkedlist l1, l2;
    int arr[] = {2, 4, 6, 8, 10};
    int arr2[] = {1, 3, 5, 7, 9};
    l1.Create(arr, 5);
    l2.Create(arr2, 5);
    // l1.Display();
    l1.Merge(l2.first);
    l1.Display();
    
    
    // l.Display();


    return 0;
}