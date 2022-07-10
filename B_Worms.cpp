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
    vector<ll> ar(n);
    for(int i=0;i<n;i++) cin>> ar[i];
    for(int i=1;i<n;i++) ar[i]+=ar[i-1];
    ll m;
    cin>> m;
    while(m--)
    {
        ll x;
        cin>> x;
        int ans=lower_bound(ar.begin(),ar.end(),x)-ar.begin();
        cout<< ans+1 << '\n';
    }
return 0;
}