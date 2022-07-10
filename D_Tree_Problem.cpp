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
 
const int mxN=1e3+1;
vll v[mxN]; 
map<pair<int,int>,int> dp;
ll dfs(int src  , int par)
{
    if(dp[mp(src,par)]!=0) return dp[mp(src , par)];
    if( v[src].size()==1 and v[src][0] == par) return 1;
    ll sum=0;
    for(auto e: v[src])
    {
        if(e!=par)
        {
            sum+=dfs(e , src);
        }
    }
    return dp[mp(src , par)]=sum+1;
}
int main()
{
Bl_dem
ll n;
cin>> n;
for(int i=1;i<n;i++)
{
    ll a , b;
    cin>> a >> b;
    v[a].pb(b);
    v[b].pb(a);
}
ll m;
cin>>m;
while(m--)
{
    ll src;
    cin>> src;
    vll temp;
    for(auto e: v[src])
    {
        temp.pb(dfs(e , src));
    }
    ll ans=0;
    for(int i=0;i<temp.size();i++)
    {
        for(int j=i+1;j<temp.size();j++) 
        {
            ans+=(temp[i]*temp[j]);
        }
    }
    if(v[src].size()==1) cout<< n-1 << nline;
    else cout<< ans+(n-1) << nline;

}
return 0;
}