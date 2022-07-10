#include<bits/stdc++.h>
#define MOD 1000000007
#define inf 7*1e18
#define ninf -1*1e18
#define nline "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define all(v) (v).begin(),(v).end()
#define vll vector<long long >
#define pb push_back
#define fs first
#define sc second
#define ppb pop_back
#define ppf pop_front
#define pf push_front
#define vvll vector<vector<ll>>
#define vvc vector<vector<char>>
#define pii pair<int,int>
#define pll pair<long long , long long >
#define si set<int>
#define mp make_pair
#define sll set<long long>
#define vpll vector<pair<ll,ll> > 
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int dx[]{1,0,0,-1};
int dy[]{0,1,-1,0};
template <typename T>
T tpow(T x, T y)
{ ll res=1 ; while(y) { if(y%2==0) x*x ; res*=x;y--;} return res;}
ll mod_pow(ll a, ll b, ll mod = (ll)(1e9 + 7)){ll res = 1; while(b){if(b&1){res = (res*a)%mod;} b /=2; a=(a*a)%mod;} return (res%mod) ;}
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
 template<typename T>
T gcd(T a, T b)
{
if(b==0) return a;
return gcd(b,a%b);
 } 
//COMBINOTORICS ---------------------------------------------------------------------------------
ll fact(ll n) { if(n<=1) return 1; return n*fact(n-1);}
ll ncr(ll n , ll r){ return fact(n)/(fact(r)*fact(n-r));}
ll npr(ll n , ll r) {return fact(n)/fact(n-r);}
/*---------------------------------------------------------------------------------------------
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */
const int mxN=2*1e5+10;
vll v[mxN];
vector<bool> vis(mxN , false);
vector<int> ans;
vector<int> c(mxN);
int dfs(int src )
{
    vis[src]=1;
    int cnt=0;
        if(v[src].size()==0)
        {
            if( c[src]==1 )
            {
                ans.pb(src);
            }
            return ( c[src]==1 ? 0 : 1 );
        }
    for(auto e: v[src])
    {
        if(!vis[e])
        {
            cnt+=dfs(e);
        }
    }
    if( cnt==0 and c[src]==1 )
    {
        ans.pb(src);
    }
    return ((c[src]!=0 ? 0 : 1));

}
 
int main()
{
Bl_dem
ll n;
cin>> n;
int src=-1;
for(int i=1;i<=n;i++)
{
    int a, b;
    cin>>a >> b;
    if(a==-1)
    {
        src=i;
        c[i]=b;
        continue;

    }
    v[a].pb(i);
    c[i]=b;
}

    int x=dfs(src);
    if(x==0) ans.pb(src);
    sort(all(ans));
    if(ans.size()==0) cout<< -1 << nline;
    else
    for(auto e: ans ) cout<<e << " " ;
return 0;
}