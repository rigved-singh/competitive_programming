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
ll arr[n+1]{0};
rep(i,1,n+1) 
{
    ll x;
    cin>>x;
    arr[i]=arr[i-1]+x;
}


 
 rep(i,0,m)
 {
     ll x;
     cin>>x;
     if(x==arr[n]) cout<<n<< " " <<arr[n]-arr[n-1]<<endl;
     else

{     ll t=lower_bound(arr+1,arr+n+1,x)-arr;
     cout<< t<< " " <<x-arr[t-1]<<endl;
}

  
 }

return 0;
}