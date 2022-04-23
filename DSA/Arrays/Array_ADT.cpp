#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int *A;
    int size; 
    int len;
};
void Display(struct Array arr)
{
    for(int i=0; i<arr.len; i++)
    {
        cout<<arr.A[i]<<" ";
    }
}

void Append(struct Array *arr, int x)
{
    if(arr->len<arr->size)
    {
        arr->A[arr->len]=x;
        arr->len++;
    }
    else   
        cout<<"Insufficient space"<<endl;
}

void Insert(struct Array *arr, int index, int x)
{
    if(arr->len<arr->size)
    {
        for (int i = arr->len; i > arr->A[index]; i--)
        {
            arr->A[i+1] = arr->A[i];
        }
        arr->A[index] = x;
        arr->len++;
    }
    else   
        cout<<"Insufficient space"<<endl;
}

void Delete(struct Array *arr, int index)
{
    for (int i = index; i < arr->len-1; i++)
    {
        arr->A[i] = arr->A[i+1];
    }
    arr->len--;
}

int main()
{   
    struct Array arr;
    cout<<"Enter the number of elements in the array: ";
    cin>>arr.len;
    arr.A = new int(arr.len);
    cout<<"Enter all the elemnts"<<endl;    
    for(int i = 0; i<arr.len; i++)
    {
        cin>>arr.A[i];
    }
    Delete(&arr, 2);
    Display(arr);
    return 0;
}