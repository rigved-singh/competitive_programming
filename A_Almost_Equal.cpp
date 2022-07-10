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
ll n;
cin>> n;
if(n%2==0) {
    cout<< "NO";
    return 0;
}

    ll i =0 , j=n;
ll ans[2*n]{0};
bool ok=true;
ll curr=1;
while(curr<=2*n-1)
{
    if(ok){
        ans[i++]=curr;
        ans[j++]=curr+1;
    }
    else {
        ans[j++]=curr;
        ans[i++]=curr+1;
    }
    curr+=2;
    ok^=1;
}

cout<< "YES" << nline;
for(auto e: ans) cout<< e << " " ;
return 0;
}
// Tutorial 
/*
Consider a valid arrangement for some n. We denote Si=ai+ai+1+ai+2+⋯+ai+n−1 for each i from 1 to 2n, where at+2n=at. Then we have: Si+1−Si=(ai+1+ai+2+ai+3+⋯+ai+n)−(ai+ai+1+ai+2+⋯+ai+n−1)=ai+n−ai. Hence |ai+n−ai|≤1. Since ai+n and ai are different, |ai+n−ai|= 1.

It is also clear from this that ai+n−ai and ai+n+1−ai+1 have opposite signs: if they were both equal to 1, we would get Si+2−Si=(Si+2−Si+1)+(Si+1−Si)=(ai+n+1−ai+1)+(ai+n−ai)= 2, similarly with −1. Thus, the values ​​ai+n−ai for i from 1 to 2n shoul be 1 and −1 alternating, and this is a sufficient condition.

Now, if n is even, we get a contradiction, since ai+n−ai=−(a(i+n)+n−ai+n), but due to the alternating they must be equal.

If n is odd, then it's now easy to build an example: for i from 1 to n ai=2i−1, ai=2i, if i is even, and ai=2i , ai=2i−1 if i is odd.

Asymptotics O(n).

Challenge:

For which pairs of (n,k) (n>k≥1) is there an arrangement of numbers from 1 to n on a circle such that the sums of each k consecutive numbers differ by not more than 1 ?
*/