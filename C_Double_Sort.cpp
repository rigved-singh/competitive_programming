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
int main()
{
Bl_dem
ll t=1;
cin>> t;
while(t--){
ll n; 
cin>> n;
vpll v(n);
vpll ans;
for(int i=0;i<n;i++)
{
    cin>> v[i].fs;
}
for(int i=0;i<n;i++) cin>> v[i].sc;
for(int i=0 ;i<n;i++)
{
    bool ok=false;
    for(int j=0;j<n-1;j++)
    { 
        if(v[j].fs>v[j+1].fs and v[j].sc>v[j+1].sc) swap(v[j] , v[j+1]) , ans.pb(mp(j+1 , j+2)) , ok=true;
        else if(v[j].fs>v[j+1].fs and v[j].sc>=v[j+1].sc)swap(v[j] , v[j+1]) , ans.pb(mp(j+1 , j+2)) , ok=true;
else if(v[j].fs>=v[j+1].fs and v[j].sc>v[j+1].sc)swap(v[j] , v[j+1]) , ans.pb(mp(j+1 , j+2)) , ok=true;
    }
    if(!ok)
    break;
}
// for(auto e: v) cout<< e.fs << " " ;
// cout<< nline;
// for(auto e: v) cout<< e.sc << " " ;
// cout<< nline;
bool ok=true;
for(int i=0;i<n-1;i++)
{
    if( v[i].fs>v[i+1].fs || v[i].sc>v[i+1].sc) ok=false;
}
if(ok)
{
    cout << ans.size() << nline;
    for(auto e: ans) cout<< e.fs << " " << e.sc << nline;
}
else cout<< -1 << nline;
}
return 0;
}