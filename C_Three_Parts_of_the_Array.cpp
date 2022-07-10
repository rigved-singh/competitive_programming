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
    ll n;
    cin>> n;
    vll prefix(n,0) ,suffix (n,0);
    vll v;
    vector<pair<ll , ll >> se;
    for(int i =0;i<n;i++)
    {
        ll x;
        cin>> x;
        v.pb(x);
    }
    prefix[0]=v[0];
    for(int i=1 ;i<n;i++)
    {
        prefix[i]=v[i]+prefix[i-1];
    }
   suffix[n-1]=v[n-1];
   se.pb(make_pair(suffix[n-1],n-1));
   for(int i=n-2;i>=0;i--)
   {
       suffix[i]=v[i]+suffix[i+1];
       se.pb(make_pair(suffix[i],i));
   }
  

    ll ans=0;
    sort(se.begin(),se.end());
    for(int i=0;i<n;i++)
    {
        auto it=lower_bound(se.begin(),se.end(),make_pair(prefix[i],0LL));
        if(it!=se.end())
        {
            if(it->first==prefix[i])
            {
                if(it->second>i) ans=prefix[i];
            }
        }
    }
    cout<< ans ;
return 0;
}