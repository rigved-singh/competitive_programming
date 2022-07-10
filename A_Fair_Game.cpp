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
map<ll,ll> m;
rep(i,0,n)
{
    ll x;
    cin>>x;
    m[x]++;
}


if(m.size()==2)
{
    int flag=1;
    for(auto it=m.begin();it!=m.end();it++)
    {
        ll p1=it->second;
        it++;
        ll p2=it->second;
        if(p1!=p2) flag=0;
    }
    if(flag) 
    {
        cout<<"YES"<<endl;
        for(auto it=m.begin();it!=m.end();it++) cout<<it->first<<" ";
    }
    else cout<<"NO"<<endl;
}
else cout<<"NO";
 
return 0;
}