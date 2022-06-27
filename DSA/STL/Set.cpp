#include <bits/stdc++.h>
using namespace std;


int main()
{
    set<string> s;
    s.insert("ab");
    s.insert("cd");
    s.insert("ef");
    s.insert("gh");
    s.erase("ab");
    

    // cout<<*s.find("ab");
    for(string value:s){
        cout<<value<<endl;
    }

    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it<<endl; 
    }

    return 0;
}