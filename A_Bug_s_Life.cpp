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
 
 vi ar[2001];
 int vis[2001], col[2001];
bool dfs(int i,int c)
{
    vis[i]=1;
    col[i]=c;
    for(auto child: ar[i])
    {
        if(vis[child]==0)
        {
            bool res=dfs(child,c^1);
            if(res==false) return false;
        }
        else if(col[i]==col[child])
        return false;
    }
    return true;
}
int main()
{
cc
int t,n,m,a,b;
cin>>t;
for(int tc=1;tc<=t;tc++)
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    ar[i].clear() , vis[i]=0 , col[i]=0;

    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        ar[a].pb(b);
        ar[b].pb(a);
    } 
    bool flag=true;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            bool res=dfs(i,0);
            if(res==false) flag=false;
        }

    }
    cout<<"Scenario #"<<tc<<":"<<endl;
    if(flag) cout<<"No suspicious bugs found!"<<endl;
    else cout<<"Suspicious bugs found!"<<endl;
}
return 0;
}