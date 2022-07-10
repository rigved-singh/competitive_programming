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

const int mxN=2e5+10;
vll v(mxN) ;
vll mxseg(4*mxN , 0);
vll sumseg(4*mxN , 0); 
 ll n;
 void buildsum(ll idx , ll low , ll high )
 {
     if(low == high)
     {
         sumseg[idx]=v[low];
         return ;
     }
     ll mid=(low+high)/2;
     buildsum(idx*2+1 , low , mid);
     buildsum(idx*2+2 , mid+1 , high);
     sumseg[idx]=sumseg[2*idx+1]+sumseg[2*idx+2];
 }
 void buildmx(ll idx , ll low , ll high)
 {
        if(low == high)
        {
            mxseg[idx]=v[low];
            return ;
        }
    ll mid=(low+high)/2;
    buildmx(idx*2+1 , low , mid);
    buildmx(idx*2+2 , mid+1 , high);
    mxseg[idx]=max(mxseg[idx*2+1] , mxseg[idx*2+2]);
 }
 ll sumqry(ll idx , ll low , ll high , ll l , ll r){
        if(low>=l and low<=r and high>=l and high<=r)
        {
            return sumseg[idx];
        }
        if(low >=r || high<=l) return 0;
        else {
            ll mid=(low+high)/2;
            return sumqry(idx*2+1 , low , mid , l , r)+ sumqry(idx*2+2 , mid+1 , high , l , r);
        }
 }
 
 ll mxqry(ll idx , ll low , ll high , ll l , ll r){
        if(low>=l and low<=r and high>=l and high<=r)
        {
            return mxseg[idx];
        }
        if(low >=r || high<=l) return 0;
        else {
            ll mid=(low+high)/2;
            return max(mxqry(idx*2+1 , low , mid , l , r),mxqry(idx*2+2 , mid+1 , high , l , r));
        }
 }

int main()
{
Bl_dem
ll t=1;
cin>> t;
while(t--){
    v.clear() ;
    mxseg.clear();
    sumseg.clear();
    cin>> n;
    for(int i=0;i<n;i++)
    {
        cin>> v[i];
    }
    buildsum(0 , 0 , n-1 );
    buildmx(0 , 0 , n-1 );
    
    bool ok=true;
    for(int i=0;i<4*n;i++)
    {
        if(mxseg[i]<sumseg[i])
        {
            ok=false;
            break;
        }
    }
    
 
}
return 0;
}