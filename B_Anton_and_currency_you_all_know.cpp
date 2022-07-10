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
        string s;
    cin >> s;
    int flag = 1;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] - 48) % 2 == 0)
            count++;
    }
    if (count == 0)
        cout << "-1";
        else
        {
    for (lli i = 0; i < s.size() - 1; i++)
    {
        if ((s[i] - 48) % 2 == 0)
            if (s[i] < s[s.size() - 1])
            {
                char c = s[i];
                s[i] = s[s.size() - 1];
                s[s.size() - 1] = c;
                flag = 0;
                break;
            }
    }
    if (flag)
    {
        for (lli i = s.size() - 2; i >= 0; i--)
        {
            if ((s[i] - 48) % 2 == 0)
            {
                char c = s[i];
                s[i] = s[s.size() - 1];
                s[s.size() - 1] = c;
                break;
            }
        }
    }

    cout << s << endl;
        }
        return 0;
}



