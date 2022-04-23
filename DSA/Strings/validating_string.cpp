#include <bits/stdc++.h>
using namespace std;


int main()
{
    bool num = false, avoid = false, cap = false, low = false;
    string str;
    cin>>str;
    for (int i = 0; str[i] != '\0' ; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
            cap = true;
        else if(str[i] >= 97 && str[i] <= 122)
            low = true;
        else if (str[i] >= 48 && str[i] <= 57)
            num = true;
        else 
        {
            avoid = true;
            break;
        }
    }
        if(avoid)
            cout<<"This string is invalid"<<endl;
        else if((!num) || (!cap) || (!low))
            cout<<"This string is invalid"<<endl;
        else 
            cout<<"This string is valid"<<endl;
    


    return 0;
}