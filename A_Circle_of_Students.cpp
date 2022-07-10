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
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll a[n];
    int pos=-1;
    rep(i,0,n) {
        cin>>a[i];
        if(a[i]==1) pos=i;
    }
    
   bool okl = true, okr = true;
		for (int j = 1; j < n; ++j) {
			okl &= (a[(pos - j + n) % n] == j + 1);
			okr &= (a[(pos + j + n) % n] == j + 1);
        }
    if(okl || okr) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}