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
    Bl_dem
        ll n;
    cin >> n;
    vll v(n);
    for (auto &e : v)
        cin >> e;
    sort(all(v));
    cout << (n + 1) / 2 - 1 << nline;
    if (n == 1 || n == 2)
    {
        for (auto e : v)
            cout << e << " ";
    }
    else
    {
        ll j = n / 2;
        ll i = 0;
        cout << v[j] << " " << v[i] << " " << v[j + 1] << " ";
        i++;
        j += 2;
        while (i < n / 2 and j < n)
        {
            cout << v[i] << " " << v[j] << " ";
            i++ ;
            j++;

        }
        while(i<n/2) {
            cout<< v[i]<< " ";
            i++;
        }
        while(j<n)
        {
            cout<< v[j] << " " ;
            j++;
        }
    }
    return 0;
}