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
ll t=1;
cin>> t;
for(int tt= 1 ;tt<=t;tt++)
{
    ll n , m ;
    cin>> n >> m;
    vector<double> v(n);
    for(auto &e: v) cin>> e;
    sort(all(v));
    double ans = 0 ;
    ll x = 0 ;
    for(int i =n-1;i>=m;i--) 
    {
        if(x==m-1)
        {
            break;
        }
        ans+= v[i];
        x++;
    }
    double median ;
    if((n-m+1)%2==0) 
    {
        median = v[(n-m+1)/2]+v[(n-m)/2];
        median/=2;
    }
    else median = v[(n-m+1)/2];
    cout<< median << endl;
    cout<<fixed <<setprecision(9)<< "Case #" << t << ": " << ans+median ;
}
return 0;
}