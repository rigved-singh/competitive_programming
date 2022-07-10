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
int t;
cin>>t;
while(t--)
{
    lli ans=0;
int flag=0;
lli n;
cin>>n;
lli arr[n+1];

for(lli i=1;i<=n;i++)
{
    cin>>arr[i];

}
sort(arr+1,arr+n+1);
for(lli i=1;i<=n;i++)
{
    if(arr[i]>i) flag=1;
    else ans+=i-arr[i];
}
if(flag) cout<<"Second"<<endl;
else
{ if(ans&1) cout<<"First"<<endl;
else cout<<"Second"<<endl;
}
}



return 0;
}