#include <iostream>
#include <fstream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{

   int arr[] = {12, 11, 13, 5, 6};
   insertionSort(arr, 5);
   for(int x:arr)
   {
       cout<<x<<endl;
   }

    return 0;
}