#include <iostream>

using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void SetPrice(void);
    void initCounter() { counter = 0; }
    void DisplayPrice();
};

void Shop ::SetPrice(void)
{
    cout << "Enter the id of the product number " << counter + 1 << ": ";
    cin >> itemId[counter];
    cout << "Enter the price of the product number : " << counter + 1 << ": ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::DisplayPrice()
{
    cout<<endl<<endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the product of id number " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of product you have: ";
    cin >> n;

    Shop myshop;

    myshop.initCounter();

    for (int i = 0; i < n; i++)
    {
        myshop.SetPrice();
    }

    myshop.DisplayPrice();

    return 0;
}