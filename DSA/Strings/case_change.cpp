#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str = "Abhoy";
    for (int i = 0; str[i] !='\0' ; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        else if(str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
    cout<<str;

    return 0;
}