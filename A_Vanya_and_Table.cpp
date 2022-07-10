#include<bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// EKMC kabhi memset mat use karna 
 //ll n ;
 //ll arr[1001][1001] ;
 // bool vis[1000001];
 template<typename T>
T ceil( T x , T n)
 { 
T ans=0;
 ans=x/n; 
 if(x%n) ans++;
return ans;
}
template<typename P>
 P Lcm (P a, P b)
 {
 return (a*b)/__gcd(a,b);
}
 template <typename G>
 void swap(G *a, G *b)
 {
 ll temp=a; a=b; b=a;
}
//CODE-------------------------------------------------------------------
//---------------------------------------------------------------------------------------- 
 
 

int main()
{
cc
ll n;
cin>>n;
int a[100][100];
for(int i=0;i<100;i++)
{
    for(int j=0;j<100;j++)
    a[i][j]=0;
}
while(n--)
{

ll x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
for(int i=y1-1;i<y2;i++)
{
    for(int j=x1-1;j<x2;j++)
    a[i][j]++;
}

}
ll ans=0;
for(int i=0;i<100;i++)
for(int j=0;j<100;j++) ans+=a[i][j];
cout<<ans<<endl;

return 0;
}