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
 
 map<int, vector<int> > m;
 bool visited[10000];
void dfs(int x)
{
    visited[x]=true;
    for(auto e: m[x])
    if(visited[e]==false) dfs(e);
}
int main()
{
cc
ll n,e;
cin>>n>>e;
for(int i=0;i<n;i++)
{
    int x,y;
    cin>>x>>y;
    m[x].pb(y);
    m[y].pb(x);
}
int cnt=0;
for(int i=1;i<=n;i++)
{
    if(visited[i]==0)
    dfs(i), cnt++;
}
cout<< cnt<<endl;

return 0;
}