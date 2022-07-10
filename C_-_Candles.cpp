#include<bits/stdc++.h>
#define epsilon 0.0000000000001
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
 
 
 
const int mxN= 2e5+10;
void USACO(string fileName)
{
 freopen((fileName+".in").c_str() , "r" , stdin); 
 freopen((fileName+ ".out").c_str() , "w" , stdout); 
}
int main()
{
Bl_dem
    ll n , k;
    cin>> n >> k;
    vll v(n);
    for(auto &e: v) cin>> e;
    ll ans = inf ;
    ll curr = 0 ;
    ll i = 0 , j = k-1;
    for(int temp = i ; temp <= j; temp++)
    {
        if(temp == i )
        curr = abs(v[temp]);
        else curr+= abs(v[temp]-v[temp-1]);

    }
    ans = min(ans , curr);
    i++;
    j++;
    while(j<n)
    {
        curr -= abs(v[i-1]);
        curr-=abs(v[i]-v[i-1]);
        curr+=abs(v[i]);
        curr+= abs(v[j]-v[j-1]);
        ans = min(ans , curr) ;
        i++ , j++;
    }
     i = (n-1-(k-1)) , j =n-1  , curr= 0 ; 
     for( int temp = j ; temp>=i ;temp--)
     {
        if(temp == j) curr+= abs(v[temp]);
        else curr+= abs(v[temp]-v[temp+1]);
     }
     ans = min(ans , curr);
    //  cout<< curr << " ";
     i-- , j--;
     while(i>=0)
     {
        curr-= abs(v[j+1]);
        curr-= abs(v[j]-v[j+1]);
        curr+= abs(v[j]);
        curr+= abs(v[i]-v[i+1]);
        ans = min(ans , curr);
        i-- , j--;
        // cout<< curr << " " ;
     }
     cout<< ans;
 
return 0;
}