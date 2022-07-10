#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define irep(it,m) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll fact(ll x)
{
    ll ans=1;
    rep(i,1,x+1)
    ans*=i;
    return ans;
}
int main()
{
cc
ll a,b;
cin>>a>>b;
cout<<fact(min(a,b));
return 0;
}