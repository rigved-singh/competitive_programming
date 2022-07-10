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
vector<ll> v;
for(int i=0;i<n;i++)
{
    ll x;
    cin>> x;
    v.pb(x);
}
ll ans=v[0], curr=0;
for(int i=0;i<n;i++)
{
    curr+=v[i];
    ans=max(ans,curr);
    if(curr<0) curr=0;
}

cout<< ans ;
return 0;
}