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
/*---------------------------------------------------------------------------------------------
+--------------+-----------+
| Alternative  |  Primary  |
+--------------+-----------+
|    <%        |    {      |
|    %>        |    }      |
|    <:        |    [      |
|    :>        |    ]      |
|    %:        |    #      |
|    %:%:      |    ##     |
|    and       |    &&     |
|    bitor     |    |      |
|    or        |    ||     |
|    xor       |    ^      |
|    compl     |    ~      |
|    bitand    |    &      |
|    and_eq    |    &=     |
|    or_eq     |    |=     |
|    xor_eq    |    ^=     |
|    not       |    !      |
|    not_eq    |    !=     |
+--------------+-----------+
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */
 
 
 
int main()
{
cc
ll m,n,s,t;
cin>> m>> n >> s>> t;
ll p=__gcd(s,t);
s/=p;
t/=p;
if(s>m || t>n) cout<<0<< " " << 0<<endl;
else
{
    ll d=m/s;
    ll p=n/t;
    d=min(d,p);
    cout<<s*d << " "<< t*d;
}

return 0;
}