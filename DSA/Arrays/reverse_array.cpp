#include <bits/stdc++.h>
using namespace std;

void Reverse(int *p, int length)
{
    int ans[length];
    for (int i = 0; i < length; i++)
    {
        ans[length-1-i] = *(p+i);
    }
    
    for (int i = 0; i < length; i++)
    {
        *(p+i) = ans[i];
    }

    
}

int main()
{
    int arr[] = {19, 10, 8, 17, 9};
    Reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}