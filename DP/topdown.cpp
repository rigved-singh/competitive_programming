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
int wt[]={1,3,4,5};
int val[]{1,4,5,7};
int n=4;
int w=7;
int dp[n+1][w+1];
for(int i=0;i<n+1;i++)
{
    for(int j=0;j<w+1;j++)
    {
        if(i==0||j==0) dp[i][j]=0;
    }
}


for(int i=1;i<n+1;i++)
{

    for(int j=1;j<w+1;j++)
    {
        if(wt[i-1]<=j)
        dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
        else 
        dp[i][j]=dp[i-1][j];
    }
}
  

cout<<dp[n][w];
return 0;
}