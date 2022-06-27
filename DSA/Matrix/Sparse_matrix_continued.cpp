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
    friend istream & operator >> (istream &is, Sparse &s);
    friend ostream & operator << (ostream &os, Sparse &s);
};

    istream & operator >>(istream &is, Sparse &s)
    {
        cout<<"Enter all the elemets: "<<endl;
        for (int i = 0; i < s.num; i++)
        {
             cin>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
        }  
        return is;
    }

    ostream & operator << (ostream &os, Sparse &s)
    {
        cout<<endl;
        int k = 0;
        for (int i = 0; i < s.m; i++)
        {
            for (int j = 0; j < s.n; j++)
            {
                if(s.ele[k].i == i && s.ele[k].j == j)
                    cout<<s.ele[k++].x<<" ";
                else 
                    cout<<0<<" ";
            }
            cout<<endl;
        }
        return os;
    }

int main()
{
    Sparse mat(3, 3, 2);
    cin>>mat;
    cout<<mat;


    return 0;
}