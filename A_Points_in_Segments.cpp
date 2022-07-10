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
ll n,m;
cin>>n>>m;
int arr[m+1]{0};
rep(i,0,n)
{
    ll a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    arr[i]++;
}
ll cnt=0;
for(int i=1;i<=m;i++)
if(arr[i]==0)
 cnt++;
cout<<cnt<<endl;
for(int i=1;i<=m;i++)
if(arr[i]==0) cout<<i<<" ";

return 0;
}