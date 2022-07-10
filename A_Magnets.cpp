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
ll n;
cin>>n;
int curr=0;
int pre=0;
int ans=0;
rep(i,0,n)
{
    int x;
    cin>>x;
    curr=x;
    if(i==0) pre=curr;

    if(pre!=curr) ans++;
    if(ans==1) ans++;
    pre=curr;
}if(ans==0) cout<<1<<endl;else
cout<<ans<<endl;
return 0;
}