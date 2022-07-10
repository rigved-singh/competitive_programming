#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    map<char ,int> mp;
    string s;
    cin>> s;
    for(auto e: s) mp[e]++;
    ll cnt=0;
    for(auto e: mp) if(e.second&1) cnt++;
    cnt--;
    if(cnt<0) cnt=0;
    if(cnt&1) cout<< "Second";
    else cout<< "First";
return 0;
}