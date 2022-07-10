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
void solve()
{ 
     int r,c;
     int ans=0;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cin>>arr[r][c];
    }
    for(int i=0;i<r;i++)
    {
        for( int j=0;j<c;j++)
        {
             if(arr[r][c]==1)
             {
                 int rcount=0;
                 int ccount=0;
                 for(int k=i;k>=0;k--)
                 {
                     if(arr[k][c]==0) break;
                     else rcount=0;
                 }
                 for(int l=j;l>=0&&l<j;l)
             }   
        }
    }
    
}
int main()
{
cc
lli t=1;
{
    void solve();
}
return 0;
}
