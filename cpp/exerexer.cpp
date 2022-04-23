#include <bits/stdc++.h>
using namespace std;


class Product
{
    public:
    string name;
    int price;
    int quantity;
    Product(){}
    Product(string n, int p, int q);
    friend ofstream & operator<<(ofstream &fos, Product &p);
    friend ifstream & operator>>(ifstream &fis, Product &p);
    friend ostream & operator<<(ostream &os,Product &i);
};

int main()
{
    int n, pr, qty;
    string name;
    cout<<"Enter the total number of products: "; cin>>n;
    Product *list[n];

    for(int i=0;i<n;i++)  
    {
        cout<<"Enter the name of "<<i+1<<" product: "; cin>>name;
        cout<<"Enter the price of "<<i+1<<" product: "; cin>>pr;
        cout<<"Enter the quantity of "<<i+1<<" product: "; cin>>qty;
        cout<<endl;
        list[i] = new Product(name, pr, qty);
    } 

    ofstream fos("my.txt");
    for(int i=0;i<n;i++)
    {
        fos<<*list[i];
    }

    Product prod;
    ifstream fis("my.txt"); 
    cout<<"Your products are"<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        fis>>prod;
        cout<<prod<<endl;
    }

    return 0;
}

Product::Product(string s, int pr, int qt)
{
    name = s;
    price = pr;
    quantity = qt;
}

ofstream & operator<<(ofstream &fos,Product &i)
{
    fos<<i.name<<endl<<i.price<<endl<<i.quantity<<endl;
    return fos;
}

ifstream & operator>>(ifstream &fis,Product &i)
{
    fis>>i.name>>i.price>>i.quantity;
    return fis;
}

ostream & operator<<(ostream &os,Product &i)
{
    os<<i.name<<endl<<i.price<<endl<<i.quantity<<endl;
    return os;
        
}
