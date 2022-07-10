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
lli n,k;
cin>>n>>k;
double arr[n];
int flag=1;
int flag2=1;
for(lli i=0;i<n;i++)
{
    cin>>arr[i];
    if(arr[i]==0) flag=0;
    if(arr[i]==k) flag2=0;
}
sort(arr,arr+n);

double ans=0;
if(flag)
ans=arr[0]-0;
for(lli i=1;i<n;i++)
{
    if((arr[i]-arr[i-1])/2>ans) ans=(arr[i]-arr[i-1])/2;
}
if(flag2)
if(k-arr[n-1]>ans) ans=k-arr[n-1];

else
if((k-arr[n-1])/2>ans) ans=(k-arr[n-1])/2;
cout<<fixed<<setprecision(10)<<ans;
return 0;
}