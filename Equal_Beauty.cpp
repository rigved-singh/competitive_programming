#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        
        ll n;
        cin>> n;
        vll v(n);
        for(auto &e: v) cin>> e;
        sort(v.begin(),v.end());
        if(n&1)
        {
            cout<<  abs(v[n/2]-v[0]-(v[n-1]-v[(n+1)/2])) << '\n'; 
        }
        else {
           ll ans=v[n/2-1]-v[0];
           cout<< ans << '\n';
        }
    }
return 0;
}