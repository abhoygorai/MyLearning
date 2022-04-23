#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
    if (n==0)
        return 0;
    else 
        return n+func(n-1);
}

int main()
{
    cout<<func(5);
    return 0;
}