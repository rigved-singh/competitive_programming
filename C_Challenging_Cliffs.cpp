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
    vector<ll > v(n);
    rep(i,0,n) cin>>v[i];
    sort(v.begin(),v.end());
    ll num1=INT_MAX,num2=INT_MIN;
    ll idx1=0,idx2=0;
    rep(i,0,n)
    {
        if(abs(v[i]-v[i+1])<abs(num1-num2)&&i!=n-1)
        {
            num1=v[i];
            num2=v[i+1];
            idx1=i;
            idx2=i+1;
        }
    }
    v.erase(v.begin()+idx1);
    v.erase(v.begin()+idx2-1);
    vector<ll > p;
    vector<ll > g;
    for(auto e: v) if(e> num1) p.pb(e); else g.pb(e);
    sort(p.begin(),p.end());
    sort(g.begin(),g.end());
    cout<<num1<< " ";
    for(auto e: p) cout<<e<< " ";
    for(auto e: g) cout<<e<< " ";
    cout<<num2<<endl;
    
}
return 0;
}