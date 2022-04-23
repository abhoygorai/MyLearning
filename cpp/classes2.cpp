#include <iostream>
#include <string>

using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void Ones_comp(void);
    void output(void);
};

void binary ::read(void)
{
    cout << "Enter a string:  ";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid entry";
            exit(0);
        }
    }
}

void binary ::Ones_comp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
    }
}

void binary ::output(void)
{
    cout<<"The ones compliment string is : ";
    for(int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
}

int main()
{
    binary b;

    b.read();
    b.chk_bin();
    b.Ones_comp();
    b.output();


    return 0;
}