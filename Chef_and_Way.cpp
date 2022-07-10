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
lli n,k;
cin>>n>>k;
lli arr[100];
for(long i=0;i<n;i++)
cin>>arr[i];

lli dep=k;



for(lli i=1;i<n;i++)
{ 
    long long int pro=arr[i-1];
    
dep=k;
while(dep!=0)
{
    if(i-dep>=0)
    {
    if(pro>arr[i-dep])
    pro=arr[i-dep];
   pro=pro%MOD;
    }
    dep=dep-1;
}
arr[i]=((arr[i]%MOD)*(pro%MOD))%MOD;
arr[i]=arr[i]%MOD;

}
cout<<arr[n-1]<<endl;

return 0;
}