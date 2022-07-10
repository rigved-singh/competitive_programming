#include<bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define int long long 
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// EKMC kabhi memset mat use karna 
 //ll n ;
 //ll arr[1001][1001] ;
 // bool vis[1000001];
 template<typename T>
T ceil( T x , T n)
 { 
T ans=0;
 ans=x/n; 
 if(x%n) ans++;
return ans;
}
template<typename P>
 P Lcm (P a, P b)
 {
 return (a*b)/__gcd(a,b);
}
 template <typename G>
 void swap(G *a, G *b)
 {
 ll temp=a; a=b; b=a;
}
//CODE-------------------------------------------------------------------
//---------------------------------------------------------------------------------------- 
 
 

signed main()
{
cc
ll t;
cin>> t;
while(t--)
{
    ll n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(make_pair(x,i+1));

    }
    ll ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ll l=v[i].second+v[j].second;
            ll r=v[i].first*v[j].first;
            if(l==r) ans++;
            if(r>2*n) break;
        }
    }
    cout<<ans<<endl;
}
return 0;
}