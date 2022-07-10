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
lli t;
cin>>t;
while(t--)
{
    lli a,b;
    cin>>a>>b;
   lli k=a*b;
   lli arr[k+1];
   for(lli i=1;i<=k;i++)
   cin>>arr[i];

if(a==1)
{
    lli ans=0;
    for(lli i=1;i<=k;i++)
    ans+=arr[i];
    cout<<ans<<endl;
 
}
else
if(a==2)
{
lli ans=0;
    for(lli i=1;i<=k;i+=2) 
    ans+=arr[i];
    cout<<ans<<endl;
  

}
else
{

    lli ans=0;
    lli mid=ceil(1.0*a/2);
   
    lli le=a-mid;
    
    lli k=a*b;
while(b--)
{
    k=k-le;
    ans+=arr[k];
    k--;
    
}

cout<<ans<<endl;

}

}
return 0;
}