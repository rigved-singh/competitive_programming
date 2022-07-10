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
int arr[n];
rep(i,0,n)
{
    cin>>arr[i];

}
int page=m;
int ans=0;
rep(i,0,n)
{
    ans=0;
if(arr[i]>=page){
    arr[i]-=page;
    ans++;
    ans+=arr[i]/m;
    cout<<ans<<" ";
    page=m-arr[i]%m;
} 
else {
    cout<<0<<" ";
    page-=arr[i];
}

}
return 0;
}