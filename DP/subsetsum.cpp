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
int arr[]{2,3,7,8};
int sum=10;
int dp[5][11];

for(lli i=0;i<11;i++)
dp[0][i]=0;

for(lli i=0;i<5;i++)
dp[i][0]=1;

for(int i=1;i<5;i++)
{
    for(int j=1;j<11;j++)
    {
        if(arr[i-1]<=j)
        {
            dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];

        }
        else dp[i][j]=dp[i-1][j];
    }
}

cout<<dp[4][11];

return 0;
}