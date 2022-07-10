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
    Bl_dem int n, m, r, c;
    cin >> n >> m >> r >> c;
    set<pair<int, int>> s;
    s.insert(mp(r, c));
cout<< r << " " << c << nline;
    while (r-- and r>0)
    {
        if (s.find(mp(r, c)) == s.end())
        {
            cout << r << " " << c << nline;
            s.insert(mp(r, c));
        }
    }
    if (s.find(mp(1, 1)) == s.end())
    {
        cout << 1 << " " << 1 << nline;
        s.insert(mp(1, 1));
    }
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            for (int j = 1; j <= m; j++)
            {
                if (s.find(mp(i,j))==s.end()) 
                {
                    cout<< i << " " << j << nline;
                    s.insert(mp(i,j));
                }
            
            }
        }
       else{
           for(int j=m;j>=1;j--)
           {
               if(s.find(mp(i,j))==s.end()) 
               {
                   cout<< i << " " << j << nline;
                    s.insert(mp(i,j));
               }
           }
       } 
    }
    return 0;
}