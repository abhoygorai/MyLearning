#include <bits/stdc++.h>
using namespace std;

int *Sort_insert(int *p, int x, int length)
{
    int *q=new int[length+1];
    for(int i=0; i<length; i++)
    {
        q[i] = p[i];
    }
    for (int i = length-1; i>=0; i--)
    {
        if(x<*(q+i))
        {
            *(q+i+1) = *(q+i);
            *(q+i)=0;
        }
        else   
        {
            *(q+i+1) = x;
            break;
        }
    }
    return q;
}
    
int main()
{
    int *arr = new int[5];
    arr[0]=2;
    arr[1]=4;
    arr[2]=6;
    arr[3]=9;
    arr[4]=16;
    arr = Sort_insert(arr, 5, 5);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}