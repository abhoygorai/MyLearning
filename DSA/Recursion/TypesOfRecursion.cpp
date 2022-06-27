#include <bits/stdc++.h>
using namespace std;

int tail(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        tail(n-1);
    }
}

int head(int n)
{
    if(n>0)
    {
        head(n-1);
        cout<<n<<endl;
    }
}

int tree(int n)
{
    if(n>0)
    {
        tree(n-1);
        cout<<n<<endl;
        tree(n-1);
    }
}

int ind(int n)
{
    head(n-1);
    cout<<n<<endl;
    tail(n-1);
}

int nested(int n)
{
    if(n>100)
        return (n-10);
    else    
    {
        // cout<<n<<endl;
        return nested(nested(n+11));
    }
}

int main()
{
    // tail(5);
    // head(5);
    // tree(3);
    // ind(3);  //indirect
    // cout<<nested(85);


    return 0;
}