#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        vector<ll > a(n);
        vector<ll > b(n);
        for(auto &e: a) cin>> e ;
        for(auto &e: b ) cin>> e;
        vector<ll > prefix(n+1);
        vector<ll > suffix (n+1);
        for(int i=0;i<n;i++)
        {
            prefix[i+1]=prefix[i]+b[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            suffix[i]=suffix[i+1]+a[i];
        }
       ll ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            ans=min(ans, max(prefix[i],suffix[i+1]));
        }
        cout<< ans << '\n' ;

    }
return 0;
}