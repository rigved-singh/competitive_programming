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
int main()
{
cc
ll a,b;
cin>>a>>b;
ll n=abs(b-a);

if(n&1)
{
    n=ceil(1.0*n/2);
    cout<<(n*(n+1))/2+((n-1)*n)/2;

}
else  
{
    n/=2;
    ll ans=2*((n*(n+1))/2);
    cout<<ans<<endl;
}
return 0;
}