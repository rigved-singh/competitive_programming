#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <stack>
#include <map>
#include <fstream>
#include <math.h>
#include <ctype.h>
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
    
        lli n, k;
        cin >> n >> k;
        for (int i = 0; i < k; i++)
        {
            if (n % 10 != 0)
                n--;
            else
                n /= 10;
        }

        cout << n << endl;
    
    return 0;
}
