#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define tk(n) int n;cin>>n;

void merge(int arr[], int l, int r, int mid){


	int s1 = mid-l+1;
	int s2 = r-mid;

	int *larr = new int[s1];
	int *rarr = new int[s2];

	for (int i = 0; i < s1; ++i)
	{
		larr[i] = arr[l+i];
	}
	for (int i = 0; i < s2; ++i)
	{
		rarr[i] = arr[mid+i+1];
	}

	int lai=0, rai=0, mi = l;

	while(lai<s1 && rai<s2){
		if(larr[lai] < rarr[rai]){
			arr[mi]=larr[lai];
			lai++;
		}
		else{
			arr[mi]=rarr[rai];
			rai++;
		}
		mi++;
	}

	while(lai<s1){
		arr[mi]=larr[lai];
		mi++;
		lai++;
	}

	while(rai<s2){
		arr[mi]=rarr[rai];
		mi++;
		rai++;
	}
}

void mergeSort(int array[], int l, int r)
{
    if (l >= r)
        return;
 
    auto mid = l + (r - l) / 2;
    mergeSort(array, l, mid);
    mergeSort(array, mid + 1, r);
    merge(array, l, r, mid);
}


int main()
{
    int arr[5] = {3, 6, 1, 8, 2};

    mergeSort(arr, 0, 4);

    for(int i=0; i<5; i++){
    	cout<<arr[i]<<" ";
    }


    return 0;
}
