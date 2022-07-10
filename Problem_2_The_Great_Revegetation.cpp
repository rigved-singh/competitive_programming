#include <bits/stdc++.h>
#define MOD 1000000007
#define nline "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define vll vector<long long>
#define pb push_back
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
template <typename G>
void swap(G *a, G *b)
{
    ll temp = a;
    a = b;
    b = a;
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

vector<vector<int>> adj(101);
int col[101]{-1};

int main()
{
    Bl_dem
    //   ifstream fin("revegetate.in");
    //   ofstream fout("revegetate.out");
    int n, m;
    cin >> n >> m;

    fill(col, col + 101, -1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        bool ar[5]{false};
        for (auto e : adj[i])
        {
            if (col[e] > 0)
                ar[col[e]] = true;
        }
        for (int j = 1; j < 5; j++)
        {
            if (!ar[j])
            {
                col[i] = j;
                ans.pb(j);
                break;
            }
        }
    }
    for (auto e : ans)
        cout << e;

    return 0;
}