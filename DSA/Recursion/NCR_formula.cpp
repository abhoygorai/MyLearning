#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==1)
        return 1;
    else    
        return n*fact(n-1);
}

int ncr(int n, int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}

int main()
{
    cout<<ncr(5, 3);
    return 0;
}