#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
set<ll> s;
ll n;
cin>> n;
for(int i=0;i<n;i++)
{
    ll x;
    cin>> x;
    s.insert(x);
}
cout<< s.size();
return 0;
}