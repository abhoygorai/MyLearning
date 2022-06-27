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

    void CreateCircular(int A[], int n)
    {   first = new Node;
        first->data = A[0];
        first->next = first;
        last = first;

        for(int i = 1; i < n; i++)
        {
            t = new Node;
            t->data = A[i];
            t->next = last->next;
            last->next = t;
            last = t;
        }
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
    
    

};

int main()
{
    Linkedlist l;
    int arr[] = {2, 5, 7, 8};
    l.CreateCircular(arr, 4);
    l.Display();
    


    return 0;
}