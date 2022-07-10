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
int main()
{
cc
ll n;
cin>>n;
ll x,y;
cin>>x>>y;
ll mw=min(x-1,y-1)+max(x-1,y-1)-min(x-1,y-1);
ll mb=min(n-x,n-y)+(max(n-x,n-y)-min(n-x,n-y));

if(mw<=mb) cout<<"White"<<endl;
else cout<<"Black"<<endl;
return 0;
}