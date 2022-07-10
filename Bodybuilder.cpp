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
lli n;
cin>>n;
while(n--)
{
    lli ans=0;
    lli a;
    lli r;
    lli curr=0;
    cin>>a>>r;
    lli an[a];
    lli bn[a];
    for(lli i=0;i<a;i++)
    cin>>an[i];
    for(lli i=0;i<a;i++)
    cin>>bn[i];
    for(lli i=0;i<a;i++)
    {
        curr+=bn[i];
        ans=max(ans,curr);
        if(i!=a-1)
        curr=curr-r*(an[i+1]-an[i]);
        if(curr<0) curr=0;

    }
    cout<<ans<<endl;

    
}
return 0;
}