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
lli arr[n];
int ans=0;
lli cnt[1001]{0};
for(lli i=0;i<n;i++)
{
    cin>>arr[i];
}
for(lli i=n-1;i>=0;i--)
{
    if(cnt[arr[i]]) arr[i]=-1;
    else 
    {
        cnt[arr[i]]++;
        ans++;
    }
}
cout<<ans<<endl;
for(lli i=0;i<n;i++)
{
    if(arr[i]!=-1) cout<<arr[i]<<" ";
}

return 0;
}