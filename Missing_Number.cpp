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
lli sum=0;
lli sum1=0;

for(lli i=1;i<=n;i++)
sum^=i;

for(lli i=0;i<n;i++)
{
    lli x=0;
    cin>>x;
    sum1^=x;
}
lli res=0;
res=sum^sum1;
cout<<res<<endl;
return 0;
}