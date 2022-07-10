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
        lli n;
    cin >> n;
    int sor = 1;
    int cnt = 0;
    int flag = 0;
    int idx = 0;

    lli arr[n];
    for (lli i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i != 0)
        {
            if (arr[i] < arr[i - 1])
                sor = 0;
        }
    }
    if (sor)
        cout << 0 << endl;
    else
    {
        for (lli i = 1; i < n; i++)
            if (arr[i] < arr[i - 1])
            {
                cnt++;
                idx = i;
            }

        if (arr[n - 1] <= arr[0])
            flag = 1;

        if (flag && cnt < 2)
            cout << n - idx;
        else
            cout << -1;
    }

    return 0;
}