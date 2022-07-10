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
 
 
vi ar[100001];
bool vis[100001];
int cc_size;
void dfs(int i)
{
   
    vis[i]=1;
    for(auto child : ar[i])
    {
        if(vis[child]==0)
        {
             cc_size+=1;
           dfs(child);
           
        }
       
    }

}

int main()
{
cc
int t;
cin>>t;
while(t--)
{
    ll n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++) ar[i].clear(), vis[i]=0;
    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        ar[a].pb(b), ar[b].pb(a);

    }
    int cc_count=0;
    ll ans=1;
    for(int i=1;i<=n;i++)
    {
        cc_size=1;
        if( vis[i]==0 ) dfs(i), cc_count++;
        ans*=cc_size;
        ans%=MOD;
    }
    cout<<cc_count<< " "<< ans<<endl;
}
return 0;
}