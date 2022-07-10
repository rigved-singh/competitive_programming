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
int n,a,b;
cin>>n>>a>>b;
int to=0;
int tt=0;

rep(i,0,n)
{
    int x;
    cin>>x;
    if(x==1) to++;
    else tt++;
}

ll ans=0;
 if(a<to) {
     ans+=to-a;
     a=0;
 }
 else a=a-to;

 if(b+a<tt) ans+=tt-(b+a);
  
cout<<ans;

return 0;
}