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
int arr[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    cin>>arr[i][j];
}
int good[n];
for(int i=0;i<n;i++)
{
    good[i]=1;
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(arr[i][j]==1)
        {
            good[i]=0;
        }
        else if(arr[i][j]==2)
        {
            good[j]=0;
        }
        else if(arr[i][j]==3)
        {
            good[i]=0;
            good[j]=0;
        }
    }
}
int ans=0;
for(auto e: good)
{
    if(e) ans++;
}
cout<<ans<<endl;
for(int i=0;i<n;i++)
{
    if(good[i]) cout<<i+1<<" ";
}
return 0;
}