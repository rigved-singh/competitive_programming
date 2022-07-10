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
/*---------------------------------------------------------------------------------------------
+--------------+-----------+
| Alternative  |  Primary  |
+--------------+-----------+
|    <%        |    {      |
|    %>        |    }      |
|    <:        |    [      |
|    :>        |    ]      |
|    %:        |    #      |
|    %:%:      |    ##     |
|    and       |    &&     |
|    bitor     |    |      |
|    or        |    ||     |
|    xor       |    ^      |
|    compl     |    ~      |
|    bitand    |    &      |
|    and_eq    |    &=     |
|    or_eq     |    |=     |
|    xor_eq    |    ^=     |
|    not       |    !      |
|    not_eq    |    !=     |
+--------------+-----------+
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */
 vi ar[1000001];
 int vis[1000001] , cc_no[1000001];
 int curr_cc; 
 void dfs(int curr)
 {
     vis[curr]=1;
     cc_no[curr]=curr_cc;
     for(auto child : ar[curr])
     {
         if(vis[child]==0)
         {
             dfs(child);
         }
     }
 }
int main()
{
cc
int t , n , r , a , b;
cin>>t;
while(t--)
{
    cin>>n>>r;
    for(int i=1;i<=n;i++)
    ar[i].clear() , vis[i]=0 , cc_no[i]=0;
    vector<pair<int, int> > edgelist;
    while(r--)
    {
        string s;
        cin>> a >> s >> b;
        if(s=="=")
        {
            ar[a].pb(b) , ar[b].pb(a);
        }
        else
        {
            edgelist.pb(make_pair(a,b));
        }
    }
     curr_cc=0;
     for(int i=1;i<n;i++)
     {
         if(vis[i]==0)
         {
         curr_cc++;
         dfs(i);
         }
     }
     bool flag=true;
     for(auto e: edgelist)
     {
         int a=e.first;
         int b=e.second;
         if(cc_no[a]==cc_no[b])
         {
             flag=false;
             break;
         }
     }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
return 0;
}