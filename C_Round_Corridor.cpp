#include<bits/stdc++.h>
#define epsilon 0.0000000000001
#define MOD 1000000007
#define inf 7*1e18
#define ninf -1*1e18
#define nline "\n"
#define lli long long int
#define ll unsigned long long
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
 template<typename T>
T gcd(T a, T b)
{
if(b==0) return a;
return gcd(b,a%b);
 } 
template<typename P>
 P Lcm (P a, P b)
 {
 return (a*b)/gcd(a,b);
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
ll n , m  , q;
cin>> n >> m >> q;
while(q--)
{
    ll sx , sy , ex , ey ;
    cin>> sx >> sy >> ex >> ey ;
    ll x , y;
    if( gcd(n , m) == 1)
    {
        cout<< "YES" << nline;
        continue;
    }
    else if(n == m ) 
    {
        if(sy!=ey) cout<< "NO" << nline;
        else cout<< "YES" << nline;
        continue;
    }
    else{
        ll lc = max(n , m);
        while( lc%n!=0 || lc%m!=0) 
        {
            lc += max(n , m);
        }
         if(sx == 1)
         {
            x = ceil(sy , lc/m);
         }
         else x = ceil(sy , lc/n);

         if(ex == 1)
         {
            y = ceil(ey , lc/ m);
         }
         else y = ceil(ey , lc/n);
    }
    cout<< (x == y ? "YES" :"NO")<< nline;


}
return 0;
}