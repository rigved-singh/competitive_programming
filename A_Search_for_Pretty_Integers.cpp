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
ll n,m;
cin>>n>>m;
ll a[n],b[m];
rep(i,0,n) cin>>a[i];
rep(i,0,m) cin>>b[i];
sort(a,a+n);
sort(b,b+m);
int flag=0;
rep(i,0,n)
{
    rep(j,0,m)
    {
        if(a[i]==b[j]) 
        {
            cout<<a[i];
            flag=1;
            break;

        }
    }
    if(flag) break;
}
if(!flag)
{
    
    cout<<min(a[0],b[0])<<max(a[0],b[0]);
    
}

return 0;
}