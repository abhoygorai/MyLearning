#include <bits/stdc++.h>
using namespace std;

int * Union(int *p, int *q, int l1, int l2)
{
    int *ans=new int();
    int i=0, j=0, k=0;
    while(i<l1 && j<l2)
    {
        if(*(p+i)<*(q+j))
        {
            ans[k]=*(p+i);
            i++;k++;
        }
        else if(*(q+j)<*(p+i))
        {
            ans[k]=*(q+j);
            j++;k++;
        }
        else 
        {
            ans[k] = *(p+i);
            i++;k++;j++;
        }
    }    
    for(;i<l1;i++)
        ans[k++]=*(p+i);
    for(;j<l1;j++)
        ans[k++]=*(q+j);
    return ans;
}
int * Intersection(int *p, int *q, int l1, int l2)
{
    int *ans=new int();
    int i=0, j=0, k=0;
    for(int i=0; i<l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if(*(p+i)==*(q+j))
            {
                ans[k++]=*(p+i);
                break;
            }
        }
        
    }
    
    return ans;
}

int main()
{
    int arr1[] = {3, 5, 10, 4, 6};
    int arr2[] = {3, 6, 7, 10, 20};
    int * uni = Intersection(arr1, arr2, 5, 5);

    for (int i = 0; i < 10; i++)
    {
        cout<<uni[i]<<endl;
    }
    

    return 0;
}