#include <iostream>
using namespace std;

class Emp // This is the class defination or the declaration.
{
private: // This is the private option, we can not access this varibales by non class entities.
    int a, b, c;

public: // This is the public option, we can get access from outside the class entites.
    int d, e;
    void setData(int x, int y, int z); // functions under classes.
    void getData()
    {
        cout << a << endl; // print all the values of the variables
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
    }
};

void Emp ::setData(int x, int y, int z) // defination of the functions we made in the class.
{
    a = x;
    b = y;
    c = z;
}

int main() // main function
{
    Emp abhoy; // object of the class Emp

    // abhoy.c = 10;    This will create an error because we can not change the values of private class variables.
    int a, b, c;
    cin >> a >> b >> c;
    abhoy.d = 10;
    abhoy.setData(a, b, c); // Putting value in the class variables.
    abhoy.getData();        // printing values by class variables.

    return 0;
}