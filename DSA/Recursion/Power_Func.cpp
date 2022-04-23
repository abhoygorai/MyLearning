#include <bits/stdc++.h>
using namespace std;

int power(int m, int n)
{
    if(n==0)
        return 1;
    else
        return m*power(m, n-1);
}

int power2(int m, int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return power(m*m, n/2);
    else 
        return power(m*m, (n-1)/2)*m;
}


int main()
{
    cout<<power(2, 6);
    cout<<power2(2, 6);

    return 0;
}