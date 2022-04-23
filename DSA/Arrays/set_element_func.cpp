#include <bits/stdc++.h>
using namespace std;

void Set(int *p, int index, int value)
{
    *(p+index) = value;
}

int main()
{
    int arr[] = {19, 10, 8, 17, 9};
    
    Set(arr, 3, 20);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}