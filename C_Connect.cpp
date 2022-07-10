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
const int mxN = 50 * 50+10;
vll par(mxN, -1);

void make_set(int x)
{
    par[x] = x;
}
int find_set(int v)
{
    if (v == par[v])
        return v;
    return par[v] = find_set(par[v]);
}
void set_union(int u, int v)
{
    int a = find_set(u);
    int b = find_set(v);
    par[b] = a;
}
int main()
{
    Bl_dem
        ll n,
        r1, c1, r2, c2;
    cin >> n >> r1 >> c1 >> r2 >> c2;
    char ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ar[i][j];
            make_set(i * n + j);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i][j] == '0')
            {
                if (j)
                {
                    if (ar[i][j - 1] == '0')
                    {
                        set_union(i * n + j, i * n + j - 1);
                    }
                }
                if (i)
                {
                    if (ar[i - 1][j] == '0')
                    {
                        set_union(i * n + j, (i - 1) * n + j);
                    }
                }
            }
        }
    }
    ll x = find_set((r1-1) * n + c1-1);
    ll y = find_set((r2-1) * n + c2-1);
    ll ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (find_set(i * n + j) == x)
            {
                for (int k = 0; k < n; k++)
                {
                    for (int l = 0; l < n; l++)
                    {
                        if (find_set(k * n + l) == y)
                        {
                            ans = min(ans, (long long)abs(i - k) * abs(i - k) + abs(j - l) * abs(j - l));
                        }
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}