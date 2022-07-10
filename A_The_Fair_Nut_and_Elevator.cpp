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
 ll fun(ll x, ll arr[],ll n)
 {
     ll val=0;
     
     rep(i,0,n)
     {
         val+=2*arr[i]*(abs(x-(i+1))+abs(i+1-1)+abs(x-1));
     }
     return val;
 }
 

int main()
{
cc
ll n;
cin>>n;
ll ans=INT_MAX;
ll arr[n];
rep(i,0,n) cin>>arr[i];
rep(i,0,n)
{
    ans=min(ans,fun(i+1,arr,n));

}
cout<<ans<<endl;
return 0;
}