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
    vector<pair<int,int> > v;
    int n;
    ll k;
    cin>>n>> k;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>> a >> b;
        v.pb(make_pair(a,b));
    }
  bool flag=false;
    for(int i=0;i<n;i++)
    {
         flag=true;
        for(int j=0;j<n;j++)
        {
            if((abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second))>k) 
            {
                flag=false;
                break;
            }
        }
        if(flag) break;
    }
    if(flag) cout<<1<<endl;
    else cout<<-1<<endl;
}
return 0;
}