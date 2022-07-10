#include <iostream>
#include <bits/stdc++.h>
#define RDX                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define int long long
using namespace std;

main()
{
    RDX int n, t;
    cin >> n >> t;
    int sm = 0, sm1 = 0;
    int p[n + 1] = {0};
    std::vector<int> s(n);
    for (auto &e : s)
    {
        cin >> e;
        sm1 += e;
    }
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int mc = min(s[a - 1], s[b - 1]);
        if (p[a] == 0 && p[b] == 0)
            sm += mc;
        else if (p[a] == 0)
        {
            if (mc < p[b])
            {
                sm -= p[b];
                sm += mc;
            }
        }
        else if (p[b] == 0)
        {
            if (mc < p[a])
            {
                sm -= p[a];
                sm += mc;
            }
        }
        else
        {
            sm-= max(p[a] , p[b]);
            p[a] = min(p[a] , p[b]);
            p[a] = min(p[a] , p[b]);
        }
        mc = min(mc , min(p[a] , p[b]));
        p[a] = mc;
        p[b] = mc;
    }
    for (int i = 1; i <= n; i++)
    {
        if (p[i] == 0)
            sm += s[i - 1];
    }
    cout << sm;

    return 0;
}