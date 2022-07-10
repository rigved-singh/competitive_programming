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
 
struct rect{
    int xl , yl , xu , yu;
    int area()
    {
        return (xu-xl)*(yu-yl);
    }
} ;
int inter(rect a, rect b){
    int xov=max(0 , min(a.xu , b.xu) - max( a.xl , b.xl));
    int yov= max(0  , min( a.yu , b.yu) - max( a.yl , b.yl));
    if( xov==(a.xu-a.xl) || yov==(a.yu - a.yl) )
    {
        if( (xov==(a.xu-a.xl and yov==(a.yu-a.yl))) || (xov== (a.xu -a.xl) and (b.yu<a.yu) and (b.yl>a.yl) ) || ( (yov== (a.yu-a.yl)) and (b.xu<a.xu) and (b.xl>a.xl) ) ) return 0;

        return (xov*yov);
    }
    else return 0;

}
 
int main()
{
Bl_dem
freopen("billboard.in" , "r" , stdin);
freopen("billboard.out" , "w" , stdout);
rect a , b;
cin>> a.xl >> a.yl >> a.xu >> a.yu >> b.xl >> b.yl >> b.xu >> b.yu;
cout<< a.area() - inter(a , b);
return 0;
}