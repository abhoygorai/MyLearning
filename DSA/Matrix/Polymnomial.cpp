#include <bits/stdc++.h>
using namespace std;

class Term
{
    public:
    int coeff;
    int expo;
};

class Poly
{
    int n;
    Term *a;

    public:
    Poly(int n)
    {
        this->n = n;
        a = new Term [this -> n];
    }
    void read()
    {
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter coeff: "; cin>>a[i].coeff;
            cout<<"Enter expo : "; cin>>a[i].expo;
        }
        
    }

    void Display()
    {
        cout<<a[0].coeff<<"x^"<<a[0].expo;
        for (int i = 1; i < n; i++)
        {
            cout<<" + "<<a[i].coeff<<"x^"<<a[i].expo;
        }
        
    }
    
};

int main()
{
    Poly eqn(3);
    eqn.read();
    eqn.Display();


    return 0;
}