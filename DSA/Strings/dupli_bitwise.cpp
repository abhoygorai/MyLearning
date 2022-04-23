#include <bits/stdc++.h>
using namespace std;


int main()
{
    int h = 0, a = 0;
    string str;
    cin>>str;

    for(int i = 0; str[i] != '\0'; i++)
    {
        a=1;
        a = a<<(str[i]-97);
        if((a&h) > 0)
            printf("%c ", str[i]);
        else
            h = h|a;
    }
    

    return 0;
}