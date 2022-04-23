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
    
    int Sum()
    {
        Node*p = first;
        int sum = 0;
        while(p!=0)
        {
            sum+=p->data;
            p=p->next;
        }
        return sum;
    }
};

int main()
{
    Linkedlist l;
    int arr[] = {2, 5, 7, 8};
    l.Create(arr, 4);
    cout<<l.Sum();


    return 0;
}