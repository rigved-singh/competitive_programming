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
int main()
{
cc
int n;
cin>>n;
float arr[n];
rep(i,0,n) cin>>arr[i];
ll m;
cin>>m;
float b[m];
ll ans=0;
rep(i,0,m) cin>>b[i];
int mx=INT_MIN;
rep(i,0,n)
{
    rep(j,0,m)
    if(ceil(b[j]/arr[i])==floor(b[j]/arr[i])) mx=max(mx,int(b[j]/arr[i]));
}

rep(i,0,n) 
{
    rep(j,0,m) 
    {
        if(mx==b[j]/arr[i]) ans++;
    }
}
cout<<ans<<endl;
return 0;
}
