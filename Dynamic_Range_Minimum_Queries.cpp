#include<bits/stdc++.h>
#define MOD 1000000007
#define nline "\n"
#define lli long long ll
#define ll long long
#define vi vector<ll>
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
#define pii pair<ll,ll>
#define pll pair<long long , long long >
#define si set<ll>
#define mp make_pair
#define sll set<long long>
#define vpll vector<pair<ll,ll> > 
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll dx[]{1,0,0,-1};
ll dy[]{0,1,-1,0};
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
 
int const mxN=2*1e5+10;
vll v(mxN);
vll seg(4*mxN);
void build(ll idx , ll low , ll high) 
{
    if(low == high) 
    {
        seg[idx]=v[low];
        return ;
    }
    ll mid=(low+high)/2;
    build(2*idx+1 , low , mid );
    build(2*idx+2 , mid+1 , high);
    seg[idx]=min(seg[2*idx+1], seg[2*idx+2]);
}
ll query(ll idx , ll low , ll high , ll l , ll h)
{
    if( l>high || h<low ) return INT_MAX;
    else if( high>=l and high<=h and low>=l and low<=h) return seg[idx];
    else return min( query(2*idx+1 , low , (low+high)/2 , l , h) , query(2*idx+2 , (low+high)/2+1 , high , l , h));
}
// O(logn) 
void update(ll idx , ll low , ll high , ll pos , ll val)
{
    if(low == high) 
    {
        seg[idx]=val;
        return ;
    }
    ll mid=(low+high)/2;
    if(pos<=mid)
    {
        update(2*idx+1 , low , mid , pos , val);
    }
    else update(2*idx+2 , mid+1 , high , pos , val);
    seg[idx]= min(seg[2*idx+1] , seg[2*idx+2]);
}

 
int main()
{
Bl_dem
    ll n ,m;
    cin>> n >> m;
    for(ll i=0;i<n;i++) cin>> v[i] ;
    build(0LL,0LL,n-1);
    while(m--)
    {
        ll ty;
        cin>> ty;
        if(ty==2)
        {
            ll  l , h;
            cin>> l >> h;
            l-- , h--;
            ll ans= query(0LL , 0LL , n-1 , l , h);
            cout<< ans << nline;
        }
        else {
            ll pos , val;
            cin>> pos >> val;
            pos--;
            update(0LL , 0LL , n-1 , pos , val);
        }
    }
return 0;
}