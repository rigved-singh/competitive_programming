#include<bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// EKMC kabhi memset mat use karna 
int main()
{
cc
  int n;
    cin >> n;
    int ans = 1;
    for (int i = 0;; i++)
    {
        if (n % (1 << i))
            break;
        if (n % ((1 << (i + 1)) - 1) == 0)
            ans = (1 << i) * ((1 << (i + 1)) - 1);
    }
    cout << ans;
    
}