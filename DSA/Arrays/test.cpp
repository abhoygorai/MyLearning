#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    int age;

    void Display()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<age<<endl;
    }
};

int main()
{
    Student s1, s2, s3;
    s1.name = "Aditya";
    s1.id = 32;
    s1.age = 19;


    s2.name = "Ayush";
    s2.id = 69;
    s2.age = 17;

    s3.name = "Abhoy";
    cout<<"Enter the id: ";
    cin>>s3.id;
    cout<<"Enter the age: ";
    cin>>s3.age;

    // s1.Display();
    // s2.Display();
    s3.Display();

    



    return 0;
}