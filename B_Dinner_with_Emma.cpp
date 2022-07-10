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
ll n,k;
cin>>n>>k;
ll mx=INT_MIN;
ll ans=0;
rep(i,0,n)
{
    ll arr[k];
    rep(j,0,k) cin>>arr[j];
    sort(arr,arr+k);
    if(arr[0]>mx) mx=arr[0] ;
}
cout<<mx<<endl;
return 0;
}