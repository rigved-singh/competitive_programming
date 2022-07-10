#include<bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll unsigned long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
template<typename T>
T ceill( T x , T n)
{
    T ans=0;
    ans=x/n;
    if(x%n) ans++;
    return ans;
}
// EKMC kabhi memset mat use karna 
int main()
{
cc
ll n,k;
cin>>n>>k;
if(k<=n) cout<<1;
else {
    cout<<ceill(k,n);
    
}
return 0;
}