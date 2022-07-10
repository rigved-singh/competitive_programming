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
 
 bool sortbysec(const pair<char,ll> &a,
              const pair<char,ll> &b)
{
    return (a.second < b.second);
}

int main()
{
cc
ll n;
cin>>n;
ll k;
cin>>k;
vector<pair<char,ll>> v;
rep(i,0,n)
{
    char x;
    cin>>x;
    v.pb(make_pair(x,i));
}
sort(v.begin(),v.end());

for(ll i=0;i<v.size();i++)
{
    if(k==0) break;

    v[i].first='0';
    k--;


}
sort(v.begin(),v.end(),sortbysec);

rep(i,0,n)
{
    if(v[i].first!='0') cout<<v[i].first;
}
return 0;
}