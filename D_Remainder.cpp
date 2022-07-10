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
int n,x,y;
cin>>n>>x>>y;
string s;
cin>>s;
string cmp=s.substr(0,s.size()-x);
string add="1";

if(y>0)
{
    rep(i,0,y) add+='0';
}
int k=cmp.size();
for(int i=0;i<s.size()-k-add.size();i++)
{
    cmp+='0';
}
cmp+=add;
ll ans=0;
for(ll i=0;i<s.size();i++)
{
    if(s[i]!=cmp[i] ) ans++;
}
cout<<ans;
return 0;
}