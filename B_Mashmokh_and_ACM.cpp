#include <bits/stdc++.h>
#define MOD 1000000007
#define nline "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define vll vector<long long>
#define pb push_back
#define fs first
#define sc second
#define ppb pop_back
#define ppf pop_front
#define pf push_front
#define vvll vector<vector<ll>>
#define vvc vector<vector<char>>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define si set<int>
#define mp make_pair
#define sll set<long long>
#define vpll vector<pair<ll, ll>>
#define Bl_dem                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int dx[]{1, 0, 0, -1};
int dy[]{0, 1, -1, 0};
template <typename T>
T tpow(T x, T y)
{
    ll res = 1;
    while (y)
    {
        if (y % 2 == 0)
            x *x;
        res *= x;
        y--;
    }
    return res;
}
ll mod_pow(ll a, ll b, ll mod = (ll)(1e9 + 7))
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        b /= 2;
        a = (a * a) % mod;
    }
    return (res % mod);
}
template <typename T>
T ceil(T x, T n)
{
    T ans = 0;
    ans = x / n;
    if (x % n)
        ans++;
    return ans;
}
template <typename P>
P Lcm(P a, P b)
{
    return (a * b) / gcd(a, b);
}
template <typename T>
T gcd(T a, T b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
// COMBINOTORICS ---------------------------------------------------------------------------------
/*---------------------------------------------------------------------------------------------
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */

int const mxN = 2001;
ll n , k;
ll dp[mxN][mxN];
vector<ll> fact[mxN];
// nlogn
void funfact(){
    for(int i=1;i<=n;i++)  // n
    {
        for(int j=i;j<=n;j+=i)  // logn
        fact[j].pb(i);
    }
}
ll cal(ll x, ll curr)
{
    
    if(dp[x][curr]!=-1) return dp[x][curr];
    if (curr == 0)
    {
        return dp[x][curr]=1;
    }
    ll currans = 0;
    for(auto e: fact[x])
    {
           currans=((currans%MOD)+cal(e , curr-1)%MOD)%MOD; 

    }
    return dp[x][curr]=currans%MOD;
}
int main()
{
    Bl_dem
            cin >>
        n >> k;
        funfact();
    memset(dp, -1, sizeof(dp));
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ans = ( ans%MOD+cal(i, k - 1) % MOD)%MOD;
    }
    cout << ans << nline;
    return 0;
}