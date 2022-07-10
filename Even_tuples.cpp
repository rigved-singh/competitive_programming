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
#define mp make_pair
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
 return (a*b)/gcd(a,b);
}
 template <typename G>
 void swap(G *a, G *b)
 {
 ll temp=a; a=b; b=a;
}
 template<typename T>
T gcd(T a, T b)
{
if(b==0) return a;
return gcd(b,a%b);
 } 
/*---------------------------------------------------------------------------------------------
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */
 ll fact(ll n);
 
ll ncr(ll n , ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
ll fact(ll n)
{
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}
 
 
int main()
{
Bl_dem
    int t;
    cin>> t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        vector<pair<ll,ll>> v(n+1);
        ll od=0 , ev=0;
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            if(x&1) ++od;
            else ++ev;
            v[i]=make_pair(od,ev);
        }
        for(ll i=0;i<k;i++)
        {
            ll l , r;
            cin>>l>>r;
            ll tod;
            ll tev;
            if(l>=2)
            {
             tod=v[r].first-v[l-1].first;
             tev=v[r].second - v[l-1].second;
            }
            else{
                tod=v[r].first;
                tev=v[r].second;
            }
           
           
           ll ans=ncr(tev,3)+ncr(tod,2)*ncr(tev,1);
           cout<< ans <<endl;
        }
    }
return 0;
}