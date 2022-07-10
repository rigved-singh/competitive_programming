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
int t;
cin>>t;
while(t--)
{
ll n,m,x,y;
cin>>n>>m>>x>>y;
char arr[n][m];
rep(i,0,n)
{
    rep(j,0,m) 
    cin>>arr[i][j];
}
if(2*x<y)
{
    ll ans=0;
    rep(i,0,n) 
    {
        rep(j,0,m)
        if(arr[i][j]=='.') ans++;
            }
            cout<<ans*x<<endl;
}
else  {
    ll ans=0;
    
    rep(i,0,n)
    {
        
        rep(j,0,m)
        {
            ll curr=0;
            if(arr[i][j]=='.') {
                while(arr[i][j]=='.'&&j<m)
                {
                    curr++;
                    j++;
                }
                j--;
                ans+=(curr/2)*y+(curr%2)*x;
            }
        }
        
    }
    cout<<ans<<endl;
}
}
return 0;
}