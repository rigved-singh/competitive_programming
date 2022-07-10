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
 
 void q1(ll ar[])
{
    ll l , r , x;
    cin>> l >> r >> x;
    for(ll i=l ; i<=r ;i++)
    {
        ar[i]+=x*x;
        x++;
    }
}
int main()
{
cc
ll n,q;
cin>>n>>q;
ll ar[n+1];
for( ll i=1;i<=n;i++)
 cin>>ar[i];
 while(q--)
 {
    int t;
    cin>>t;
    if(t==1) q1(ar);
        else if(t==2) 
        {
            ll x;
            cin>>x;
            cout<<ar[x]<<endl;
        }
 }
return 0;
}