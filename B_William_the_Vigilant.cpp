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

int main()
{
    Bl_dem int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == 'a' and s[i + 1] == 'b' and s[i + 2] == 'c')
            cnt++;
    }
    while (q--)
    {
        int pos;
        char ch;
        cin >> pos >> ch;
        pos--;
        if (s[pos] == ch)
        {
            cout << cnt << nline;
            continue;
        }

        if (pos + 2 < n and s[pos] == 'a')
        {
            if (s[pos + 1] == 'b' and s[pos + 2] == 'c')
                cnt--;
        }
        else if (pos - 1 >= 0 and pos + 1 < n and s[pos] == 'b')
        {
            if (s[pos - 1] == 'a' and s[pos + 1] == 'c')
                cnt--;
        }
        else if (pos - 2 >= 0 and s[pos] == 'c')
        {
            if (s[pos - 1] == 'b' and s[pos - 2] == 'a')
                cnt--;
        }
        s[pos] = ch;
        if (ch == 'a')
        {
            if (pos + 2 >= n)
            {
                cout << cnt << nline;
                continue;
            }
            else if (s[pos + 1] == 'b' and s[pos + 2] == 'c')
            {
                cnt++;
            }
        }
        if (ch == 'b')
        {
            if (pos - 1 < 0 || pos + 1 >= n)
            {
                cout << cnt << nline;
                continue;
            }
            else if (s[pos - 1] == 'a' and s[pos + 1] == 'c')
            {
                cnt++;
            }
        }
        if (ch == 'c')
        {
            if (pos - 2 < 0)
            {
                cout << cnt << nline;
                continue;
            }
            else if (s[pos - 1] == 'b' and s[pos - 2] == 'a')
            {
                cnt++;
            }
        }
        cout << cnt << nline;
    }
    return 0;
}