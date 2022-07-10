#include <bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define si set<int>
#define mp make_pair
#define sll set<long long>
#define rep(i, s, n) for (ll i = s; i < n; i++)
#define Bl_dem                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
// EKMC kabhi memset mat use karna
//ll n ;
//ll arr[1001][1001] ;
// bool vis[1000001];
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
    return (a * b) / __gcd(a, b);
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
/*---------------------------------------------------------------------------------------------
+--------------+-----------+
| Alternative  |  Primary  |
+--------------+-----------+
|    <%        |    {      |
|    %>        |    }      |
|    <:        |    [      |
|    :>        |    ]      |
|    %:        |    #      |
|    %:%:      |    ##     |
|    and       |    &&     |
|    bitor     |    |      |
|    or        |    ||     |
|    xor       |    ^      |
|    compl     |    ~      |
|    bitand    |    &      |
|    and_eq    |    &=     |
|    or_eq     |    |=     |
|    xor_eq    |    ^=     |
|    not       |    !      |
|    not_eq    |    !=     |
+--------------+-----------+
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */

int main()
{
    Bl_dem
        ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        cin >> c[i];

    sort(a.begin(), a.end());

    sort(b.begin(), b.end());

    sort(c.begin(), c.end());

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = upper_bound(b.begin(), b.end(), a[i]);
        ll p = it - b.begin();
        if (it == b.end())
            break;
        if (b[p] > a[i])
        {
            auto it = upper_bound(c.begin(), c.end(), b[p]);
            ll k = it - c.begin();
            if (it == c.end())
                break;
            if (c[k] > b[p])
            {
                cnt++;
                a[i] = -1;
                b[p] = -1;
                c[k] = -1;
            }
            else
                break;
        }
        else
            break;
    }
    cout << cnt << endl;
    return 0;
}