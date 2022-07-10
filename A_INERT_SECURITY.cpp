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
lli k=n;
while(sqrt(k)*sqrt(k)!=k)
{
k-=1;
}
k=sqrt(k);
lli ans=k*4+((n-k*k)/k)*2;
if((n-k*k)%k) ans+=2;
cout<<ans<<endl;
return 0;
}