#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex();
    Complex(int r, int i);
    Complex operator+(Complex t);

};


int main()
{
    Complex c1(5, 7), c2(2, 9), c3;
    c3 = c1 + c2;
    cout<<c2.real<<" "<<c2.img;

    return 0;
}

Complex::Complex()
{
    real = 0;
    img = 0;
}

Complex::Complex(int r, int i)
{
    real = r;
    img = i;
}
Complex operator+(Complex & t1, Complex & t2)
{
    Complex temp;
    temp.real = t1.real + t2.real; 
    temp.img = t1.img + t2.img; 
}