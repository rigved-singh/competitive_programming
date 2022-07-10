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
//  template<typename T>
// T ceil( T x , T n)
//  { 
// T ans=0;
//  ans=x/n; 
//  if(x%n) ans++;
// return ans;
// }
// template<typename P>
//  P Lcm (P a, P b)
//  {
//  return (a*b)/__gcd(a,b);
// }
//  template <typename G>
//  void swap(G *a, G *b)
//  {
//  ll temp=a; a=b; b=a;
// }
//CODE-------------------------------------------------------------------
//---------------------------------------------------------------------------------------- 
 vector<string> ans;
 void fun(string q,ll k)
 {
   string p=q;
   while(q.size()<k) q+=p;
   q.erase(q.begin()+k,q.end());
   ans.pb(q);
 }
 

int main()
{
cc
ll n,k;
cin >> n >> k;
string s;
cin>>s;

for(int i=1;i<=s.size();i++)
{
  string q=s.substr(0,i);
  fun(q,k);
}

sort(ans.begin(),ans.end());
cout<<ans[0];
return 0;
}