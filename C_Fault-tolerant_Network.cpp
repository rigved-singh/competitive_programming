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
 
 
 
int main()
{
Bl_dem
ll t=1;
cin>> t;
while(t--){
ll n;
cin>> n;
vll a(n) , b(n) ;
for(auto &e: a) cin>> e;
for(auto &e: b) cin>> e;
ll ans=1e10;
ans= min(ans , abs(a[0]-b[0])+ abs(a[n-1]-b[n-1]));
ans=min(ans , abs(a[0]-b[n-1])+abs(a[n-1]-b[0]));
ll bestao=1e10;
for(auto e: b)
{
    bestao=min(bestao , abs(a[0]-e));
}
ll bestan=1e10;
for(auto e: b)
{
    bestan=min(bestan , abs(a[n-1]-e));
}
ll bestbo=1e10;
for(auto e: a)
{
    bestbo=min(bestbo , abs(b[0]-e));
}
ll bestbn=1e10;
for(auto e: a)
{
    bestbn=min(bestbn , abs(b[n-1]-e));
}
    ans = min(ans , abs(a[0]-b[0]) + bestan + bestbn);
    ans = min(ans , abs(a[n-1]-b[n-1]) +bestao + bestbo );
    ans= min(ans , abs(a[0]-b[n-1]) + bestan + bestbo);
    ans= min(ans , abs(a[n-1]-b[0])+ bestao + bestbn);
    ans=min(ans , bestao+bestan+bestbo+bestbn);
    cout<< ans << nline;



}
return 0;
}
// 1 10 1
// 20 4 25

// 1 and 4 , 10 and 25 and 10 and 20