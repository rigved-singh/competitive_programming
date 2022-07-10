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

const int mxN = 1e5+10;
class dsu
{
public:
    int par[mxN];

    int find_set(int src)
    {
        if ( par[src] != src )
            return par[src] = find_set(par[src]);
        return src;
    }

    void merge_set(int x, int y)
    {
        int u = find_set(x);
        int v = find_set(y);
        if (u != v)
        {
            par[v]=u;
        }
    }
    dsu(int size)
    {
        for (int i = 0; i <= size; i++)
        {
            par[i] = i;
        }
    }
};

int main()
{
    Bl_dem
     
        ll n, a, b;
        cin >> n >> a >> b;
        dsu g1(n), g2(n);
        vector<pair<int, int>> ans;
        while (a--)
        {
            int x, y;
            cin >> x >> y;
            g1.merge_set(x, y);
        }
        while (b--)
        {
            int x, y;
            cin >> x >> y;
            g2.merge_set(x, y);
        }
        for ( int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if ((g1.find_set(i) != g1.find_set(j)) and ( g2.find_set(i) != g2.find_set(j) ))
                {
                    g1.merge_set(i, j);
                    g2.merge_set(i, j);
                    ans.pb(mp(i, j));
                   
                }
            }
        }
        cout << ans.size() << nline;
        for (auto e : ans)
            cout << e.fs << " " << e.sc << nline;
    
    return 0;
}