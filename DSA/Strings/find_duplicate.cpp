#include <bits/stdc++.h>
using namespace std;


int main()
{
    
    string str;
    cin>>str;

    int h[26];
    for (int i = 0; i < 26; i++)
    {
        h[i] = 0;
    }
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        h[(str[i]) - 97] += 1;
        // printf("%d", h[(str[i]) - 97]);
    }
    cout<<endl;
    for (int i = 0; i < 26 ; i++)
    {
        if(h[i] > 1)
            printf("%c ", i+97);
    }

    return 0;
}