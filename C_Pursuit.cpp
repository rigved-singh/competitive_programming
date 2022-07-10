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
        ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll a, b;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.pb(x);
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            b.pb(x);
        }
        sort(all(a), greater<ll>());
        sort(all(b),greater<ll>());
        for(int i=1;i<n;i++) a[i]+=a[i-1];
        for(int i=1;i<n;i++) b[i]+=b[i-1];
        ll ans=0;
        ll l=n , r=1e10;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            ll add=mid-n;
            ll cond=mid-mid/4;
            ll myscore=100*min(add, cond);
            if(add<cond)
            {
                myscore+=a[cond-add-1];
            }
            ll enemyscore=0;
            if(cond>=n)
            {
               enemyscore=b[n-1]; 
            }
            else  enemyscore=b[cond-1];
        
            if(myscore>=enemyscore)
            {
                ans=mid-n;
                r=mid-1;
            }
            else 
            {
                l=mid+1;
            }

        }
        cout<<  ans << nline;
    }
    return 0;
}