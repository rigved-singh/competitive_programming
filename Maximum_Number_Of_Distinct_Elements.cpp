#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool sortgreater(const pair<ll , ll > &a , const pair<ll , ll > &b)
{
    return a.first>b.first;
}
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        vector<pair<ll, ll >> v;
      
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>> x;
            v.pb({x,i});
        }
        
        sort(v.begin(),v.end(),sortgreater);
        ll ans[n];
        ll curr=v[0].first-1;
        for(int i=0;i<n;i++)
        {   
            
        v[i].first=min(v[i].first-1,curr);
            
            v[i].first=max(0LL,v[i].first);
            curr=v[i].first-1;
          
            ans[v[i].second]=v[i].first;
        }
    for(auto e: ans) cout<< e<< " ";
    cout << '\n';

    }
return 0;
}