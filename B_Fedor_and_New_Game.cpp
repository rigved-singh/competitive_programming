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
lli n,m,k;
cin>>n>>m>>k;
lli arr[m+1];
for(lli i=0;i<m+1;i++)
cin>>arr[i];

lli ans=0;

for(lli i=0;i<m;i++)
{
    int count=0;
for(lli j=21;j>=0;j--)
{
    lli p=arr[i]&(1<<j);
    lli q=arr[m]&(1<<j);
    if(p!=q) 
    count++;
}


if(count<=k) ans++; 

}
cout<<ans<<endl;
return 0;
}