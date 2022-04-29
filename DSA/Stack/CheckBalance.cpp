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
    bool isEmpty()
    {
        if(top == -1)
            return true;
        else 
            return false;
    }
};


bool IsBalance(string str)
{
    
    Stack stk(str.length());
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] == '(')
            stk.push(str[i]);
        else if(str[i] == ')')
        {   
            if(stk.isEmpty())
                return false;
            else
                stk.pop();
        }
    }
    if(stk.isEmpty())   
        return true;
    else
        return false;
    
}


int main()
{
    string exp;
    cin>>exp;
    cout<<IsBalance(exp);


    return 0;
}