#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
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
    ll n;
    cin>>n;
    vlli v;
for(ll i=1;i<=n;i++)
v.pb(i);
    cout<<2<<endl;
    while(v.size()!=1)
    {
       cout<<v[v.size()-1]<< " " << v[v.size()-2]<<endl;
        int k=v[v.size()-1]+v[v.size()-2];
        k=ceil(1.0*k/2);
        v.erase(v.begin()+v.size()-1);
        v.erase(v.begin()+v.size()-1);
        v.pb(k);
        
    }
}
return 0;
}