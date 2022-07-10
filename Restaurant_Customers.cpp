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
vector<pair<ll , ll>  > v;
for(int i=0;i<n;i++)
{
    ll a , b;
    cin>> a >> b;
    v.pb({a,1});
    v.pb({b,-1});
}
ll res=0, curr=0;
sort(v.begin(),v.end());
for(auto e: v)
{
    if(e.second==1) curr++;
    else curr--;
    res=max(res,curr);
}
cout<< res ;
return 0;
}