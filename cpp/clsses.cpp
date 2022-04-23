#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int l;
    int w;

    int area()
    {
        return l * w;
    }
    int perimeter()
    {
        return 2 * (l + w);
    }
};

int main()
{
    Rectangle r1, r2;
    r1.l = 10;
    r1.w = 30;
    cout<<r1.area()<<endl;
    Rectangle *p;
    p = &r2;
    p -> l = 20;
    p ->w = 20;
    cout<<p->perimeter()<<endl;

    return 0;
}