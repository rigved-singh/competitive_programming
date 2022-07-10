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
    vector< ll > v;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>> x;
        v.pb(x);
        sum+=x;
    }
    sort(v.begin(),v.end());
    ll m;
    cin>> m;
    while(m--)
    {
        ll x, y;
        cin>> x >> y;
        ll ans=0;
        ll coins=0;
       vector<ll> :: iterator it;
       
       it=lower_bound(v.begin(),v.end(),x);
        if(it==v.end())
        {
            ans=v[n-1];
            it=v.end()-1;
            
            
        }
        else ans+= (*it);
       
        coins=max(0LL , x-(*it));
        
        ans=coins+max(0LL , y-(sum-ans));
            
        if(it!=v.begin())
        {
            coins=max(0LL , x-v[it-v.begin()-1]);
            
            ans=min(ans, coins+max(0LL , y-(sum-v[it-v.begin()-1])));
        }

        cout<< ans << '\n';

    }
return 0;
}