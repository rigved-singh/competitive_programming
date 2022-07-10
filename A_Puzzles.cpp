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
int n,m;
cin>>n>>m;
int arr[51];
int ans=INT_MAX;
for(int i=1;i<=m;i++)
{
    cin>>arr[i];
}
sort(arr+1,arr+m+1);

for(int i=1;i<=m-n+1;i++)
{
    ans=min(ans,arr[i+n-1]-arr[i]);
}

cout<<ans<<endl;
return 0;
}