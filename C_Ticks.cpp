#include <bits/stdc++.h>
#define epsilon 0.0000000000001
#define MOD 1000000007
#define inf 7 * 1e18
#define ninf -1 * 1e18
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
bool exists(ll x, ll y, ll n, ll m)
{
    if (x >= 0 and x < n and y >= 0 and y < m)
        return true;
    return false;
}

int main()
{
    Bl_dem
        ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        char ar[n][m];
        bool ok[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ar[i][j];
                ok[i][j] = false;
            }
        }
        vector<vector<pair<ll, ll>>> dp(n, vector<pair<ll, ll>>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (ar[i][j] == '*')
                {
                    ll rlx = i + 1, rly = j + 1;
                    if (exists(rlx, rly, n, m) and ar[rlx][rly] == '*')
                    {
                        dp[rlx][rly].fs += (dp[i][j].fs + 1LL);
                    }
                    ll llx = i + 1, lly = j - 1;
                    if (exists(llx, lly, n, m) and ar[llx][lly] == '*')
                    {
                        dp[llx][lly].sc += dp[i][j].sc + 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                
                ll x = min(dp[i][j].fs, dp[i][j].sc);
                ll temp = x;
                if (x>=k)
                {
                    ok[i][j]=true;
                    ll rux = i - 1, ruy = j + 1;
                    while (temp)
                    {
                        ok[rux][ruy] = true;
                        temp--;
                        rux--, ruy++;
                    }
                    ll lux = i - 1, luy = j - 1;
                    while (x)
                    {
                        ok[lux][luy] = true;
                        x--;
                        lux--, luy--;
                    }
                }
            }
        }
        bool fin = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (ok[i][j]==false and ar[i][j] == '*')
                {
                    fin = false;
                    break;
                }
            }
        }
        cout << (fin ? "YES" : "NO") << nline;
    }
    return 0;
}
