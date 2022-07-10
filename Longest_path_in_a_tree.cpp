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
 
 vi ar[10001];
 bool vis[10001];
 int maxD, maxnode;
void dfs(int i, int d)
{
    vis[i]=1;
    if(d>maxD)
    {
        maxD=d;
        maxnode=i;
    }
    for(auto child : ar[i])
    {
        if(vis[child]==0)
        {
            dfs(child,d+1);
        }
    }
}
int main()
{
cc
int n;
cin>>n;
int a,b;
for(int i=0;i<n;i++) cin>>a>>b , ar[a].pb(b) , ar[b].pb(a);
maxD=-1;
dfs(1,0);
for(int i=0;i<=n;i++) vis[i]=0;
maxD=-1;
dfs(maxnode,0);
cout<<maxD<<endl;
return 0;
}