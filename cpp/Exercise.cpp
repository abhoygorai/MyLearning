#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll;
    int m1;
    int m2;
    int m3;
    string name;

public:
    Student(int r, int m1, int m2, int m3, string n);
    string  getName();
    int  getRoll();
    int  Total();
    float  percent();
    char  Grade();
};

int main()
{
    int rolln, m1n, m2n, m3n;
    string namen;
    cout<<"Enter name of the student :";cin>>namen;
    cout<<"Enter roll number student :";cin>>rolln;
    cout<<"Enter marks :";cin>>m1n>>m2n>>m3n;

    Student s1(rolln, m1n, m2n, m3n, namen);

    cout<<"Name: "<<s1.getName()<<endl;
    cout<<"Roll: "<<s1.getRoll()<<endl;
    cout<<"Total marks: "<<s1.Total()<<endl;
    cout<<"Percentage: "<<s1.percent()<<endl;
    cout<<"Grade: "<<s1.Grade()<<endl;

    


    return 0;
}

Student :: Student(int r, int m1, int m2, int m3, string n)
    {
        roll = r;
        this-> m1 = m1;
        this-> m2 = m2;
        this-> m3 = m3;
        name = n;
    }

    string Student :: getName()
    {
        return name;
    }
    int Student :: getRoll()
    {
        return roll;
    }
    int Student :: Total()
    {
        return (m1+m2+m3);
    }
    float Student :: percent()
    {
        return Student :: Total()/3;
    }
    char Student :: Grade()
    {
        if(percent() > 60)
            return 'A';
        else if(percent() > 40)
            return 'B';
        else 
            return 'C';
    }