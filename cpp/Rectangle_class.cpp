#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    int len;
    int ber;

public:
    void setLen(int l)
    {
        if(l>=0)
            len=l;
        else   
            len = 0;
    }
    void setBer(int b)
    {
        if(b>=0)
            len=b;
        else   
            ber = 0;
    }
    int area()
    {
        return len*ber;
    }
    Rectangle(int l = 0, int b = 0)
    {
        setLen(l);
        setBer(b);
    }
    Rectangle(Rectangle &r)
    {
        len = r.len;
        ber = r.ber;
    }
};

int main()
{
    Rectangle r(20, 30);
    cout<<r.area()<<endl;

    return 0;
}