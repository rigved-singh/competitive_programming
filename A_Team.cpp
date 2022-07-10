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
int n;
cin>>n;
int ans=0;
int sum=0;
int arr[1000][3];
for(int i=0;i<n;i++)
{
    for(int j=0;j<3;j++)
    {
        cin>>arr[i][j];
    }
    
}
for( int j=0;j<n;j++)
{
   for(int i=0;i<3;i++)
   {
       sum+=arr[j][i];
   }
   if(sum>=2) ans++;
   sum=0;
}
cout<<ans;
return 0;
}