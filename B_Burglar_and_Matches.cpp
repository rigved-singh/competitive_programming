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
ll n,m;
cin>>n>>m;
vector<ll> a;
vector<ll> b;
rep(i,0,m)
{
    ll x;
    cin>>x;
    a.pb(x);
    ll y;
    cin>>y;
    b.pb(y);
}
ll ans=0;
ll mx=0;
while(n>0)
{
rep(i,0,m)
{
    if(mx<b[i])
    {
        mx=b[i];
    }
}
rep(i,0,m)
{
    if(b[i]==mx)
    {
        ans+=min(a[i],n)*b[i];
        n-=min(a[i],n);
        b[i]=0;
        mx=0;
        break;
    }
    
}

}
cout<<ans<<endl;
return 0;
}
