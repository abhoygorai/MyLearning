#include <bits/stdc++.h>
using namespace std;

class Accounts
{
private: 
    long AccountNo;
    string fName;
    string lName;
    float balance;
    static int nextAcNo;
public:
    Accounts(){};
    Accounts(string f, string l, float bl);
    string getFirstN(){return fName;};
    string getLastN(){return lName;};
    float getBalance(){return balance;};
    
};

int main()
{
    


    return 0;
}