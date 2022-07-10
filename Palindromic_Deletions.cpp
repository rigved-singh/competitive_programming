#include <bits/stdc++.h>
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
    return (n%MOD * fact(n - 1)%MOD)%MOD;
}
ll ncr(ll n, ll r) { return fact(n) / (fact(r) * fact(n - r)); }
ll npr(ll n, ll r) { return fact(n) / fact(n - r); }
/*---------------------------------------------------------------------------------------------
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */

map<string, ll> dp;
ll cal(string s)
{
    if(dp[s]) return dp[s]%MOD;
    if(s.size()==0) return dp[s]=1;
    string y=s;
    reverse(all(y));

    for(int i=0;i<s.size();i++)
    {
        string temp=s;
        temp.erase(temp.begin()+i);
        dp[s]=(dp[s]%MOD +cal(temp))%MOD;
        dp[s]=(dp[s]+(y==s))%MOD;
    }
    return dp[s]%MOD;
}
ll inverse(ll a , ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1)
        {
            res= ((res)%MOD *(a)%MOD)%MOD;
            b--;
        }
        b/=2;
        a= ((a%MOD) * (a%MOD))%MOD;
    }
    return res;
}

int main()
{
    Bl_dem
        ll t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        dp.clear();
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            string temp=s;
            temp.erase(temp.begin()+i);
            sum+=cal(temp);
        }
        ll inv=fact(n);
        inv=inverse(inv , MOD-2);
        cout<< "Case #" << tt << ": ";
        ll ans=((sum%MOD)*(inv)%MOD)%MOD;
        cout<< ans << nline;
   }


    return 0;
}