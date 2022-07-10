#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vll vector<ll>
#define all(v) (v).begin(), (v).end()
#define Bl_dem                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
// COMBINOTORICS ---------------------------------------------------------------------------------
ll fact(ll n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
ll ncr(ll n, ll r) { return fact(n) / (fact(r) * fact(n - r)); }
ll npr(ll n, ll r) { return fact(n) / fact(n - r); }
// look for terminators after if statement
int main()
{

    Bl_dem
        ll n;
    cin >> n;

    vll v(n);

    for (auto &e : v)
        cin >> e;
    sort(all(v));

    if (n == 1)
    {
        cout << "YES";
        return 0;
    }
    if (n == 2)
    {
        cout << "NO";
        return 0;
    }
    swap(v[n-1], v[n-2]);
    if (v[n - 2] >= v[n - 3] + v[n-1])
    {
        cout << "NO";
        return 0;
    }
    cout << "YES" << '\n';
    for (auto e : v)
        cout << e << " ";

    return 0;
}