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
int sum=11;
bool dp[5][12];

for(lli i=0;i<12;i++)
dp[0][i]=false;

for(lli i=0;i<5;i++)
dp[i][0]=true;

for(int i=1;i<5;i++)
{
    for(int j=1;j<12;j++)
    {
        if(arr[i-1]<=sum)
        {
            dp[i][j]=dp[i-1][sum-arr[i-1]]||dp[i-1][j];

        }
        else dp[i][j]=dp[i-1][j];
    }
}

cout<<dp[4][11];

return 0;
}