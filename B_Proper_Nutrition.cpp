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
ll n,a,b;
cin>>n>>a>>b;
ll ans=-1;
for(ll i=0;i<10000001;i++)
{
    if((n-i*a)/b==ceil((n-i*a),b))
    {
        ans=i;
        break;
    }
}
if(ans==-1 || ans<0 || (n-a*ans)/b<0) cout<<"NO"<<endl;
else
{
    cout<<"YES"<<endl;
    cout<<ans << " " << (n-a*ans)/b;
}
return 0;
}