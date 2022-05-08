#include <bits/stdc++.h>
using namespace std;

void BubSort(int *arr, int n){
    int flag;
    for(int i = 0; i<n-1; i++){
        flag = 0;
        for(int j = 0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
}

void InsertionSort(int *arr, int n)
{
    int key, j;
    for(int i=1; i<n; i++)
    {
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
}

int main(){
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {8, 5, 7, 3, 2};
    InsertionSort(arr, 5);
    for(auto x:arr){
        cout<<x<<endl;
    }

    return 0;
}