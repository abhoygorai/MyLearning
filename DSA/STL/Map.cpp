#include <bits/stdc++.h>
using namespace std;


int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cde";
    m[3] = "bbb";
    m.insert({4, "afg"});

    // map<int, string> ::iterator it;

    // for(auto it = m.begin(); it!=m.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    for(auto it: m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
 
    return 0;
}