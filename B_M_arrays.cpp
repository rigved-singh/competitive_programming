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
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
lli t;
cin>>t;
while(t--)
{
    lli n,m;
    cin>>n>>m;
    map<lli,lli> ma;
    lli count=0;
    lli ans=0;
    for(lli i=0;i<n;i++)
    {
        lli x;
        cin>>x;
        ma[x%m]++;
    }
    for(int i=1;i<=m/2;i++)
    {
       lli x=ma[i];
       lli y=ma[m-i];
       lli mn=min(x,y);
       lli mx=max(x,y);
       if(mn==0&&mx==0) continue;
ans+=max((lli)1,mx-mn);
    }
    if(ma[0]) ans++;
    cout<<ans<<endl;
}
return 0;
}