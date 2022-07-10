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
int arrx[n],arry[n];
for(int i=0;i<n;i++)
{
    cin>>arrx[i]>>arry[i];
}
int ans=0;
for(int j=0;j<n;j++)
{
    int countl=0,countr=0,countu=0,countd=0;
    int x=arrx[j];
    int y=arry[j];
    for(int i=0;i<n;i++)
    {
        if(arrx[i]==x&&arry[i]>=y+1) countu++;
    if(arrx[i]>=x+1&&arry[i]==y) countr++;
    if(arrx[i]<=x-1&&arry[i]==y) countl++;
    if(arrx[i]==x&&arry[i]<=y-1) countd++;

        
    }
    if(countu&&countl&&countd&&countr) ans++;
}
cout<<ans<<endl;
return 0;
}