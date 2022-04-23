#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "hello my name is abhoy";
    // cout<<s.length()<<endl;
    // cout<<s.capacity()<<endl;
    // cout<<s.empty()<<endl;

    string str1 = "hello";
    string str2 = " world";
    str1.append(" abhoy");
    cout<<str1<<endl;
    str1.insert(3, str2);
    cout<<str1<<endl;
    str1.replace(1, 4, str2);
    str1.erase();  
    cout<<str1<<endl;
    


    





    return 0;
}