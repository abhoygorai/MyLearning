#include <bits/stdc++.h>
using namespace std;


int main()
{
    // pair<int, string> p;
    // // p = make_pair(2, "abc");
    // p = {2, "abc"};
    // cout<<p.first<<" "<<p.second<<endl;
    pair<int, int> prr[3];

    for(int i = 0; i<3; i++)
    {
        cin>>prr[i].first>>prr[i].second;
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<prr[i].first<<" "<<prr[i].second<<endl;
    }
    


    return 0;
}