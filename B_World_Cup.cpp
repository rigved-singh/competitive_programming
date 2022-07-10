#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n;
    cin>> n;
    ll ar[n];
    for(int i=0;i<n;i++) cin>> ar[i];
    set<pair<ll, ll >> s;
    for(int i=0;i<n;i++)
    {
        ll t=(ar[i]-(i)+n-1)/n;
        s.insert({i+1+t*n,i+1});
    }
    cout<< (s.begin())->second;

return 0;
}