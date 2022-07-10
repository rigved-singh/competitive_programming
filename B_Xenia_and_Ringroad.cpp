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
lli ans=0;
lli arr[k+1];
arr[0]=1;
for(lli i=1;i<k+1;i++)
cin>>arr[i];

for(lli i=0;i<k;i++)
{
    if(arr[i]>arr[i+1])
    {
        ans+=(n-arr[i]+(arr[i+1]-1));
        ans++;
    }
        else
        {
            ans+=arr[i+1]-arr[i];
        }
    
    
}
cout<<ans<<endl;
return 0;
}