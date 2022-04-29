#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
}*top = NULL;

class Stack
{
    public:
    int size;
    int *S;
        
    void push(int x)
    {
        Node *t;
        t = new Node;

        if(t == NULL)
            cout<<"Stack Overflow"<<endl;
        else
        {
            t->data = x;
            t->next = top;
            top = t;
        }
    }

    int pop()
    {
        int x = -1;
        Node *t;
        if(top == NULL)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            t = top;
            top = top->next;
            x = t->data;
            free(t);
        }
        return x;
    }

    void Display()
    {
        Node *p;
        p = top;
        while(p!=NULL)
        {
            cout<<p->data<<endl;
            p=p->next;
        }
    }
};

int main()
{
    Stack st;
    st.push(4);
    st.push(2);
    st.push(6);
    st.Display();


    return 0;
}