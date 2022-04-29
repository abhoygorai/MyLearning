#include <bits/stdc++.h>
using namespace std;

class Stack
{
    public:
    int size;
    int top;
    int *S;
    
    Stack(int sz)
    {
        S = new int[sz];
        top = -1;
    }

    void push(int x)
    {
        if(top < size-1)
        {
            top++;
            S[top] = x;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }

    int pop()
    {
        int x = -1;
        if(top > -1)
        {
            x = S[top];
            top--;
        }
        else
        {
            cout<<"Stack Underflow"<<endl;
        }
        return x;
    }

    int peek(int pos)
    {
        int x = -1;
        if(pos<0)
        {
            cout<<"Invalid Position"<<endl;
        }
        else
            x = S[top+1-pos];
        
        return x;
    }

    void Display()
    {
        int i = top;
        while(i>-1)
        {
            cout<<S[i]<<endl;
            i--;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(4);
    st.push(2);
    st.push(6);
    st.pop();
    st.Display();


    return 0;
}