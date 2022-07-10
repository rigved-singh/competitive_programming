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
lli t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    ll mn=INT_MAX;
    ll mx=INT_MIN;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        if(x>mx) 
        {
            mx=x;
        }
        if(x<mn) 
        {
            mn=x;
        }
    }
    if(mn+k>=mx-k) cout<<mn+k<<endl;
    else cout<<-1<<endl;
}
return 0;
}