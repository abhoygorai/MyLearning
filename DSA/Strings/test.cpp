#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sort012(int a[], int n)
    {
        
        int zero = 0, one = 0, two = 0;
        for(int i = 0; i<n; i++)
        {
            if(a[i] == 0)   
                zero++;
            else if(a[i] == 1)
                one++;
            else if(a[i] == 2)
                two++;
        }
        int k = 0;
        for(int i =0; i<zero; i++)
        {
            a[i+k] = 0;
            k++;
        }
        for(int i =0; i<one; i++)
        {
            a[i+k] = 1;
            k++;
        }
        for(int i =0; i<two; i++)
        {
            a[i+k] = 2;
            k++;
        }
    }
};

int main()
{
    int n; cin >>n;

    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    Solution ob;

    ob.sort012(arr, n);
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}