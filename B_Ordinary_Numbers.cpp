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
        string s;
        cin >> s;
        lli ans = (s.size() - 1) * 9;
        
            ans += (s[0] - 48) - 1;
        string cmp = "";
        cmp.assign(s.size(),s[0]);
        if (s >= cmp)
            ans++;

        if (s.size() == 1)
            cout << s << endl;
        else
            cout << ans << endl;
    }

    return 0;
}