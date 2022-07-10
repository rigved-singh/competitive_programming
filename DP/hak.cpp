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
int k;
cin>>n>>k;
long c[k];
for(long i=0;i<k;i++)
{
cin>>c[i];
}
 long v=k;
    long t[v+1][n+1];
    for(long i=1;i<n+1;i++)
    t[0][i]=0;
    for(long i=0;i<v+1;i++)
    t[i][0]=1;
    
    for(long i=1;i<v+1;i++)
    {
        for(long j=1;j<n+1;j++)
        {
            if(c[i-1]<=j)
            t[i][j]= t[i][j-c[i-1]]+t[i-1][j];
            else t[i][j]=t[i-1][j];
        }
    }
    cout<<t[v][n];
return 0;
}