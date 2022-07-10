#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n;
    cin>> n;
    vector<int > v(n);
    for(auto &e: v) cin>> e;
    unordered_set<int> s;
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s.find(v[i]-1)==s.end()) 
        {
            cnt++;
        }
        s.insert(v[i]);
    }
    cout<< cnt ;

return 0;
}