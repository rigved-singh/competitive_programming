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
int n,m;
cin>>n>>m;
vector<int> a,b;
rep(i,0,n) {
int c;
cin>>c;
a.pb(c);
}
rep(i,0,m) 
{
    int c;
    cin>>c;
    b.pb(c);
}
ll ans=0;
rep(i,0,n)
{
    if(b.size()==0) break;
    
    if(b.front()>=a[i])
    {
        ans++;
        b.erase(b.begin());

    }
   
}
 cout<<ans<<endl;
return 0;
}