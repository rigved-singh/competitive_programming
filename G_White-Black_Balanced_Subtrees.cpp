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

ll ans = 0;
const int mxN = 40000;
vector<ll> v[mxN];
vector<int> vis(mxN, 0);
vector<int> col(mxN, 0);

int dfs(int src)
{

    vis[src] = 1;
    if (v[src].size() == 0)
    {
        return (col[src] == 1 ? 1 : -1);
    }
    int bal=0;
    for(auto e: v[src])
    {
        if(!vis[e]) bal+=dfs(e);
    }

    if( col[src]==1 ) bal++; else bal--;
    if(bal==0) ans++;
    return bal;
    
}

int main()
{
    Bl_dem
        ll t = 1;
    cin >> t;
    while (t--)
    {
        ans=0;
        ll n;
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            v[i].clear(), vis[i] = 0;
            col[i]=0;
        }

        for (int i = 2; i <= n; i++)
        {
            int x;
            cin >> x;
            v[x].pb(i);
        }
        string s;
        cin >> s;
        for (int i = 1; i <= n; i++)
        {
            if (s[i-1] == 'W')
                col[i] = 1;
            
        }
        int bal= dfs(1);
        cout<< ans << nline;
        

    }
    return 0;
}