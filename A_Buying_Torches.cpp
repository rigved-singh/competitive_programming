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
int t;
cin>>t;
while(t--)
{
ll x,y,n;
cin>>x>>y>>n;
ll curr=1;
ll ans=0;
ll req=y*n+n-1;
ans+=ceil(req,(x-1));
cout<<ans+n<<endl;
}
return 0;
}