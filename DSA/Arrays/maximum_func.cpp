#include <bits/stdc++.h>
using namespace std;

int Max(int arr[], int l)
{
    int max=arr[0];
    for (int i = 0; i < l; i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[] = {19, 10, 8, 17, 9};
    cout<<Max(arr, 5);
    return 0;
}