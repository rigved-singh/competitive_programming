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
int static t [100][100];


int knapsack(int wt[],int val[],int w,int n)
{
    if(n==0||w==0) return 0;
    if(t[n][w]!=-1) return t[n][w];
    if(wt[n-1]<=w)
    {
        return t[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    }
    else return t[n][w]=knapsack(wt,val,w,n-1);
}
int main()
{
cc
for(lli i=0;i<100;i++)
{
    for(lli j=0;j<100;j++) t[i][j]=-1;
}
int wt[]={1,3,4,5};
int val[]{1,4,5,7};
int n=4;
int w=7;
lli ans=knapsack(wt,val,w,n);
cout<<ans<<endl;
return 0;
}