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
 return (a*b)/__gcd(a,b);
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
Bl_dem
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll cnt0=0 , cnt1=0;
    int ar[n];
    for(int i=0 ; i<n;i++) 
    {
        cin>>ar[i];
        if(ar[i]) cnt1++;
        else cnt0++;
    }
    if(cnt1<=n/2) 
    {
        cout<<cnt0<<endl;
            for(int i=0 ;i<cnt0 ;i++) cout<<0<<" " ;
            cout<<endl;
    }
    else
    {
        if(cnt1&1)
        {
        cout<<cnt1-1<<endl;
        for(int i=0 ;i<cnt1-1;i++) cout<<1<<" " ;
        cout<<endl;
        }
        else
        {
            cout<<cnt1<<endl;
            for(int i=0 ;i<cnt1;i++) cout<<1<<" " ;
            cout<<endl;
        }
    }
}
return 0;
}