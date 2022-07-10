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
#define irep(it,m) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
cc
unsigned ll n,k;
cin>>n>>k;
ll type=0;
unsigned ll nof=0;
ll lef=1e18;
for(ll i=1;i<=k;i++)
{
    unsigned ll x;
    cin>>x;
    
    if(n%x<lef)
    {
        type=i;
        nof=n/x;
        lef=n%x;
    }
}
cout<<type<< " "<< nof;
return 0;
}