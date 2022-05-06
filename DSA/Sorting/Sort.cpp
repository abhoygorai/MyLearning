#include <bits/stdc++.h>
using namespace std;

void BubSort(int *arr, int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

int main(){
    int arr[] = {8, 5, 7, 3, 2};
    BubSort(arr, 5);
    for(auto x:arr)
    {
        cout<<x<<endl;
    }

    return 0;
}