#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define irep(it,m) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
int t;
cin>>t;
while(t--)
{
    ll n;
    ll m;
    ll k;

    cin>>n>>m>>k;

    map<ll,ll> ma;
    int cnt=0;
    rep(i,0,k)
    {
        ll x;
        cin>>x;
      ma[x]++;

    }
    for(auto it=ma.begin();it!=ma.end();it++)
    {
        if(it->second>1&&it->first<n+1) cnt++;

    }
    cout<<cnt<<" ";
    for(auto it=ma.begin();it!=ma.end();it++)
    {
        if(it->second>1&&it->first<n+1) cout<<it->first<<" ";
        
    }
    cout<<endl;
}
return 0;
}