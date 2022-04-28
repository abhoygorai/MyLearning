#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
};

class Linkedlist : public Node 
{
    public:
    Node * first;
    Node * t;
    Node * last;

    void CreateDoubly(int A[], int n)
    {   first = new Node;
        first->data = A[0];
        first->next = NULL;
        first->prev = NULL;
        last = first;

        for(int i = 1; i < n; i++)
        {
            t = new Node;
            t->data = A[i];
            t->next = NULL;
            t->prev = last;
            last->next = t;
            last = t;
        }
    }

    int Length(Node *f)
    {
        Node *p = f;
        int count = 0;
        while (p!=NULL)
        {
            count++;
            p = p->next;
        }
        return count;
    }    

    void Display()
    {
        Node*p = first;
        do
        {
            cout<<p->data<<endl;
            p = p->next;
        } while (p!=first);
        
    }
    
    void Insert(int pos, int val)
    {
        Node *t, *p = first;
        int i;
        if(pos<0 || pos>Length(first))
        {
            return;
        }   
        if(pos == 0)
        {
            t = new Node;
            t->data = val;
            t->prev = NULL;
            t->next = first;
            first->prev = t;
            first = t;
        }
        else
        {
            for(int i = 0; i<pos-1; i++)
                p = p->next;
            t = new Node;
            t->data = val;
            t->prev = p;
            t->next = p->next;
            if(p->next)
                p->next->prev = t;
            p->next = t;
        }
    }
    

};

int main()
{
    Linkedlist l;
    int arr[] = {2, 5, 7, 8};
    l.CreateDoubly(arr, 4);
    l.Insert(1, 111);
    l.Display();
    


    return 0;
}