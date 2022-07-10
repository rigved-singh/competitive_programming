#include <bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back
#define pii pair<int, int>
#define si set<int>
#define sll set<long long>
#define cc                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main()
{
    cc
        lli t;
    cin >> t;
    while (t--)
    {
        lli n, x;
        cin >> n >> x;
        lli ans = 0;
        map<int, int> ma;
        for (lli i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ma[x]++;
        }
        for (auto it = ma.begin(); it != ma.end(); it++)
        {
            if (it->second >= 1)
            {
                ans++;
                x -= (it->second - 1);
            }
           
        }
         if (x <= 0)
                cout << ans << endl;
            else
            {
                ans -= x;
                cout << ans << endl;
            }
    }

        return 0;
    }