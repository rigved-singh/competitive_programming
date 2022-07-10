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
ll n,m;
cin>>n>>m;
ll ans=INT_MAX;
vector<int> rpos;
string s,t;
cin>>s>>t;
for(int i=0;i+s.size()<=t.size();i++)
{
    vector<int> pos;
    ll ch=0;
    for(int j=i;j<i+s.size();j++)
    {
        if(s[j-i]!=t[j]) {
            ch++;
            pos.pb(j-i+1);
        }
    }
    if(ans>ch) 
    {
        ans=min(ans, ch);
      rpos.erase(rpos.begin(),rpos.end());
      for(auto e: pos) rpos.pb(e);
    }
}
cout<<ans<<endl;
for(auto e: rpos) cout<<e<<" ";
return 0;
}