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
int arr[n];
rep(i,0,n) cin>>arr[i];
int ans=0;
sort(arr,arr+n);
for(int i=n-1;i>=0;i--)
{
    if(k%arr[i]==0)
    {
        ans=k/arr[i];
        break;
    }
}
cout<<ans;

return 0;
}