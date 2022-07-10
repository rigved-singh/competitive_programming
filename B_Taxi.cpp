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
ll ans=0;
ll a=0,b=0,c=0;
rep(i,0,n) 
{
    int x;
    cin>>x;
    if(x==1) a++;
    else if(x==2) b++;
    else if(x==3) c++;
    else ans++;
}
ll k=min(c,a);
ans+=k;
c-=k;
a-=k;
ans+=c;
ans+=b/2;
b=b%2;
ans+=b;
a-=min(b*2,a);
ans+=a/4;
if(a%4) ans++;


cout<<ans;




return 0;
}