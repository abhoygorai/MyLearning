#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    virtual int area() = 0;
    virtual int perimeter() = 0;
};

class Rectangle:public Shape
{
    int len;
    int ber;
public:
    Rectangle(int l, int b);
    int area();
    int perimeter();
};

class Circle:public Shape
{
    int rad;
public:
    Circle(int r);
    int area();
    int perimeter();
};

int main()
{
    Shape *s = new Rectangle(20, 15);
    cout<<s -> area()<<endl;
    cout<<s -> perimeter()<<endl;
    s = new Circle(10);
    cout<<s -> area()<<endl;
    cout<<s -> perimeter()<<endl;
    return 0;
}

Rectangle::Rectangle(int l, int b)
{
    len = l;
    ber = b;
}
int Rectangle::area()
{
    return (len*ber);
}
int Rectangle::perimeter()
{
    return 2*(len+ber);
}

Circle::Circle(int r)
{
    rad = r;
}
int Circle::area()
{
    return (int)(3.14*rad*rad);
}
int Circle::perimeter()
{
    return (int)(2*3.14f*rad);
}