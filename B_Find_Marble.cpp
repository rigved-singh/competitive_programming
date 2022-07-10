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
#define mp make_pair
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
 return (a*b)/gcd(a,b);
}
 template <typename G>
 void swap(G *a, G *b)
 {
 ll temp=a; a=b; b=a;
}
 template<typename T>
T gcd(T a, T b)
{
if(b==0) return a;
return gcd(b,a%b);
 } 
/*---------------------------------------------------------------------------------------------
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */
 
 vi ar[100001];
 int vis[100001];
 int dis[100001];
 void bfs(int src)
 {
     vis[src]=1;
     dis[src]=0;
     queue<int> q;
     q.push(src);
     int curr=q.front();
     while(!q.empty())
     {
         curr=q.front();
         
         for(auto child : ar[curr])
         {
             if(vis[child]==0)
             {
                 vis[child]=1;
                 dis[child]=dis[curr]+1;
                 q.push(child);
             }
         }
         q.pop();
     }
 }
int main(){
Bl_dem
    int n , s , e;
    cin>> n >> s >> e;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        ar[i].pb(x);
    }
    bfs(s);
    if(dis[e]==0 and e!=s) cout<<-1<<endl;
    else cout<< dis[e]<<endl;

return 0;
}