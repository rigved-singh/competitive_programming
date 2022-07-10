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
lli arr[3];
lli ans=0;
for(int i=0;i<3;i++)
cin>>arr[i];
sort(arr,arr+3);
ans+=n/arr[0];
n-=arr[0]*ans;
if(arr[1]<=n)
{
    ans+=n/arr[1];
    n-=arr[1]*(n/arr[1]);
}
if(arr[2]<=n)
{
    ans+=n/arr[2];
    n-=arr[2]*(n/arr[2]);

}
cout<<ans;
return 0;
}