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
int arr[100]={0};
int ans=0;

int n,k;
cin>>n>>k;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int i,j;
i=0;j=n-1;
while(arr[i]<=k||arr[j]<=k)
{
     if( i>j) break;
    if(arr[i]<=k)
    {
        ans++;
        i++;
    }
    else if(arr[j]<=k) {
        ans++;
        j--;
    }
}
cout<<ans;

return 0;
}