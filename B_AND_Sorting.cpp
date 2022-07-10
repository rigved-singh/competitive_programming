#include<bits/stdc++.h>
#define MOD 1000000007
#define inf 7*1e18
#define ninf -1*1e18
#define nline "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define all(v) (v).begin(),(v).end()
#define vll vector<long long >
#define pb push_back
#define fs first
#define sc second
#define ppb pop_back
#define ppf pop_front
#define pf push_front
#define vvll vector<vector<ll>>
#define vvc vector<vector<char>>
#define pii pair<int,int>
#define pll pair<long long , long long >
#define si set<int>
#define mp make_pair
#define sll set<long long>
#define vpll vector<pair<ll,ll> > 
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
int main()
{
ll t=1;
cin>> t;
while(t--){
    ll n;
    cin>> n;
    vll v(n);
    for(auto &e: v) cin>> e;
    vll a=v;
    ll ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(v[i]==i) continue;
        ans&=i;
    }
    cout<< ans << nline;
}
return 0;
}