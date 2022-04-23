#include <bits/stdc++.h>
using namespace std;

class Diagonal
{
    int n;
    int *A;
public:
    Diagonal()
    {
        n = 2;
        A = new int[n];
    }
    Diagonal(int i)
    {
        n = i;
        A = new int[n];
    }

    void Set(int i, int j, int x)
    {
        if(i == j)
            A[i-1] = x;
    }

    int Get(int i, int j)
    {
        if(i == j)
            return A[i-1];
        else 
            return 0;
    }
    void Display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i == j)
                    cout<<A[i]<<" ";
                else 
                    cout<<0<<" ";
            }
            cout<<endl;
        }
        
    }
};

int main()
{
    Diagonal m(4);
    m.Set(1,1,5);
    m.Set(2,2,4);
    m.Set(3,3,6);
    m.Set(4,4,9);
    
    m.Display();

    return 0;
}