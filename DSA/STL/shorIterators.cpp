#include <bits/stdc++.h>
using namespace std;


int main()
{
    // vector<int> v = {2, 4, 6, 7, 9};

    // vector<int> :: iterator it = v.begin();
    // // cout<<*(it+2);
    // for (int val:v)
    // {
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    vector <pair<int, int>> v = {{1,2}, {3, 4}, {5, 6}};
    // vector<pair<int, int>> :: iterator it = v.begin();
    for(auto it = v.begin(); it!=v.end(); it++)
    {
        cout<<(*it).first<<" "<<it->second<<endl;
    }
    


    return 0;
}