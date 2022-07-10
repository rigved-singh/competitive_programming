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
string x,y;
cin>>x>>y;
int flag=1;
string ans="";
for(int i=0;i<x.size();i++)
{
    if(y[i]>x[i]) 
    {
        flag=0;
        break;
    }
    else{
        ans+=y[i];
    }
}
flag ? cout<<ans<<endl : cout<<-1;
cout<<endl;
return 0;
}