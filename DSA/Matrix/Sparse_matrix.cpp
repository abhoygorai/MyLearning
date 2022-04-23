#include <bits/stdc++.h>
using namespace std;

class Elements
{
    public:
    int i;
    int j;
    int x;
};

class Sparse
{
    int m;
    int n;
    int num;
    Elements *ele;
    
    public:
    Sparse (int m, int n, int num)
    {
        this->m = m;
        this->n = n;
        this->num = num;
        ele = new Elements[this->num];
    }
    ~Sparse()
    {
        delete [] ele;
    }
    void read()
    {
        cout<<"Enter all the elemets: "<<endl;
        for (int i = 0; i < num; i++)
        {
             cin>>ele[i].i>>ele[i].j>>ele[i].x;
        }       
    }

    void Display()
    {
        cout<<endl;
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(ele[k].i == i && ele[k].j == j)
                    cout<<ele[k++].x<<" ";
                else 
                    cout<<0<<" ";
            }
            cout<<endl;
        }
        
    }

};

int main()
{
    Sparse mat(3, 3, 2);
    mat.read();
    mat.Display();


    return 0;
}