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
ll n;
cin>>n;
string a,b;
cin>>a>>b;
ll ans=0;
rep(i,0,n) 
{
    if( (a[i]-48)^(b[i]-48)!= (1-(a[i]-48))^(b[i]-48)  ) ans++;
}
cout<<ans;
return 0;
}