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
vector<int> a;
int min=INT_MAX;
int ar[n];
for(int i=0;i<n;i++)
{
    cin>> ar[i];
    if(ar[i]<min)
    {
        min=ar[i];
    }
}
for(int i=0;i<n;i++)
{
    if(ar[i]==min) a.pb(i);
}
ll ans=INT_MAX;
for(int i=0;i<a.size()-1;i++)
{
    if(abs(a[i]-a[i+1])<ans) ans=abs(a[i]-a[i+1]);
}
cout<<ans<<endl;
return 0;
}