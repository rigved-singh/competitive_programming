#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    string s;
    cin>> s;
    sort(s.begin(),s.end());
    vector<string> ans;
    ans.pb(s);
    while(next_permutation(s.begin(),s.end()))
    {
            ans.pb(s);

       }
       cout<< ans.size()<<'\n';
       for(auto e: ans) cout<<e <<'\n';
        return 0;
}