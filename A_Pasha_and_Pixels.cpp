#include<bits/stdc++.h>
#define MOD 1000000007
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
 
ll ar[1002][1002]; 
 
int main()
{
Bl_dem
for(int i=0;i<=1001;i++) for(int j=0;j<=1001;j++) ar[i][j]=0;
ll n , m , k; 
cin>> n >>m >> k;
ll ans=0;
bool ok=true;
for(int i=1;i<=k;i++)
{
    ll x, y;
    cin>> x >> y;
    ar[x][y]=1;
    if(ar[x-1][y-1]==1 and ar[x][y-1]==1 and ar[x-1][y]==1 and ok )
    {
        ans=i;
        ok=false;
    }
    if(ar[x][y+1]==1 and ar[x-1][y]==1 and ar[x-1][y+1]==1 and ok)
    {
        ans=i;
        ok=false;
    }
    if(ar[x][y+1]==1 and ar[x+1][y]==1 and ar[x+1][y+1]==1 and ok) 
    {
        ans=i;
        ok=false;
    }
    if(ar[x][y-1]==1 and ar[x+1][y]==1 and ar[x+1][y-1]==1 and ok) 
    {
        ans=i;
        ok=false;
    }

}
cout<< ans << '\n';

return 0;
}