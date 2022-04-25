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
        Node *head1 = first;
        Node *head2 = ptr;

        if(head1->data<=head2->data)
        {
            first = head1;
            head1 = head1->next;
        }
        else
        {
            first = head2;
            head2 = head2->next;
        }
        Node *l = first;

        while(head1!=NULL && head2!=NULL)
        {
            if(head1->data <= head2->data)
            {
                l->next = head1;
                l = head1;
                head1 = head1->next;
            }
            else
            {
                l->next = head2;
                l = head2;
                head2 = head2->next;
            }

            if(head1==NULL)
            {
                l->next = head2;
            }
            else if (head2 == NULL)
            {
                l->next = head1;
            }
        }
        

    }
};

int main()
{
    Linkedlist l1, l2;
    int arr[] = {2, 4, 6, 8, 10, 12, 13};
    int arr2[] = {1, 3, 5, 7, 9};
    l2.Create(arr, 7);
    l1.Create(arr2, 5);
    // l1.Display();cout<<endl;
    // l2.Display();cout<<endl;
    l1.Merge(l2.first);
    l1.Display();
    return 0;
}