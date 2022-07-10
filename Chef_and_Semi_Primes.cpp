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
 vector<int> v;
 bool prime(ll x)
 {
     if(x<2) return false;
     for(int i=2;i*i<=x;i++)
     {
         if(x%i==0) return false;
     }
     return true;
 }
 void semiprime(int k)
 {
     for(int i=2;i*i<k;i++)
     {
         if(k%i==0)
         {
             if(prime(i) and prime(k/i) and i!=k/i)
             {
                 v.pb(k) ;
                 break;
             }
         }
     }

 }
int main()
{
Bl_dem
ll n;
cin>>n;
for(int i=0;i<n;i++)
{
    ll x;
    cin>>x;

    v.clear();
    bool flag=false;
    for(int j=2;j<x;j++)
    {
        semiprime(j);
    }
    int p=0;
    int j=v.size()-1;
    
    while(p<=j)
    {
        if(v[p]+v[j]<x)
        {
            p++;
        }
        else if(v[p]+v[j]>x)
        {
            j--;
        }
        else 
        {
            flag=true;
            break;
        }
        
            
        }
        if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    }
return 0;
}