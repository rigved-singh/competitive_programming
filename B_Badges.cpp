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
ll n;
cin>>n;
ll cnt=0;
for(int i=0;i<=n;i++)
{
    if(i<=a&&n-i<=b&&n-i>=0)
    cnt++;
}
cout<<cnt<<endl;
return 0;
}