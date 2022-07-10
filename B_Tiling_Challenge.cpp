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
int n;
cin>>n;
char arr[n+2][n+2];
memset(arr,'#',sizeof(arr));
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    cin>>arr[i][j];
}
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        if(arr[i][j]=='.')
        {
            if(arr[i+1][j]=='.'&&arr[i-1][j]=='.'&&arr[i][j+1]=='.'&&arr[i][j-1]=='.')
           {
                 arr[i+1][j]='#';arr[i-1][j]='#';arr[i][j+1]='#';arr[i][j-1]='#';
                 arr[i][j]='#';
           }
        }
    }
}

int flag=1;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    if(arr[i][j]=='.') {
        flag=0;
        break;
    }
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}