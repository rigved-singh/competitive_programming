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
ll fact(ll n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
ll ncr(ll n, ll r) { return fact(n) / (fact(r) * fact(n - r)); }
ll npr(ll n, ll r) { return fact(n) / fact(n - r); }
/*---------------------------------------------------------------------------------------------
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */

const int mxN = 2 * 1e5 + 10;
vll v(mxN, 0);
vll bit(mxN, 0);
ll n;
ll sum(ll i)
{
    int ans = 0;
    for(;i>0;i-=(i& (-1*i) )) {
        ans += bit[i];
    }
    return ans;
}
void update(ll i , ll x)
{
    for( ;i<=n ; i+= (i&(-1*i)) )
    {
        bit[i]+=x;
    }
}
int main()
{
    Bl_dem
        ll t = 1;
    cin >> t;
    while (t--)
    {
        bit.clear();
        ll ans=0;
        v.clear();
        cin>> n;
        for(ll i=1;i<=n;i++)
        {
            cin>> v[i];
        }
        map<int,int> m;
        for(ll i=1;i<=n;i++)
        {
            ans+=sum(n)-sum(v[i]);
            update(v[i] , 1LL);
            ans+=m[v[i]];
            m[v[i]]++;
        }
        cout<< ans << nline;
    }
    return 0;
}