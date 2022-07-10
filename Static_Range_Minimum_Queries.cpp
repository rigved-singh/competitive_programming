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
 
 const ll mxN=2*1e5+10;
 vector<int> t(4*mxN);
vector<int> v(mxN);
void build(int idx , int low , int high)
{
    if(high == low)
    {
        t[idx]=v[low];
        return ;
    }
    ll mid= (high+low)/2;
    build(2*idx+1 ,low  , mid);
    build(2*idx+2 , mid+1 , high);
    t[idx]=min(t[2*idx+1] , t[2*idx+2]);
}
int query(int idx , int low , int high , int l , int r)
{
    int mid=(low+high)/2;
    if(l>high || r<low) return INT_MAX;
    else if( low>=l and low<=r and high>=l and high<=r) return t[idx];
    else return min( query( 2*idx+1 , low , mid , l , r) , query(2*idx+2 , mid+1 , high , l , r) );
}
 
int main()
{
Bl_dem
ll n , m ;
cin>> n >> m;
for(int i=0;i<n;i++) cin>> v[i] ;
build(0 , 0 , n-1);
while(m--)
{
    int l , r;
    cin>>  l >> r;
    l-- , r--;
    int ans=query(0 , 0 , n-1 , l , r) ;
    cout<< ans << nline;
}

return 0;
}