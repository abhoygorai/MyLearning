#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int key)
{
    for (int  i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {19, 10, 8, 17, 9};
    cout<<search(arr, 8);

    return 0;
}