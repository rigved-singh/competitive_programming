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
int vis[10001];
int dis[10001]; 
void bfs(int src)
{
    vis[src]=1;
    dis[src]=0;
    queue<int> q;
    q.push(src);
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
    for(auto child: ar[curr])
    {  
        if(vis[child]==0) 
       q.push(child) , vis[child]=1 , dis[child]=dis[curr]+1;

    }

    }

}
int main()
{
cc
ll t;
cin>>t;
while(t--)
{
    ll n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) ar[i].clear(), vis[i]=0 , dis[i]=0;
    while(m--)
    {
        ll a,b;
        cin>>a>>b , ar[a].pb(b) , ar[b].pb(a);

    }

    bfs(1);
    cout<<dis[n]<<endl;
}
return 0;
}