#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    int id;
    string name;

    Employee(int i, string n)
    {
        id = i;
        name = n;
    }
};

class Fulltime:public Employee
{
public:
    int salary;

    Fulltime(int i, string n, int s):Employee(i, n)
    {
        salary = s;
    }

    void getFulltime()
    {
        cout<<name<<endl;
        cout<<salary<<endl;
        cout<<id<<endl;
    }
};

class Parttime:public Employee
{
public:
    int wage;
    Parttime(int i, string n, int w):Employee(i, n)
    {
        wage = w;
    }

    void getParttime()
    {
        cout<<name<<endl;
        cout<<wage<<endl;
        cout<<id<<endl;
    }
};


int main()
{
    Fulltime f(21, "Abhoy", 1000);
    Parttime p(22, "honu", 500);

    f.getFulltime();
    p.getParttime();
    
    return 0;
}