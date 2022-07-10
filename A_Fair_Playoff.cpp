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
ll t;
cin>>t;
while(t--)
{
    ll arr[4];
    rep(i,0,4) 
    {
        cin>>arr[i];
    }
    ll p1=max(arr[0],arr[1]);
    ll p2=max(arr[2],arr[3]);
    sort(arr,arr+4) ;
    if(max(p1,p2)==arr[3] && min(p1,p2)==arr[2]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}