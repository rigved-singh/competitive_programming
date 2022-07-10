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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int cntr=0,cntl=0;
    int posrf=-1, posrl=-1 , poslf=-1 , posll=-1;
    
    for(int i=0 ; i<n ; i++)
    {
        if(s[i]=='R') 
        {
            cntr++;
            if(cntr==1) posrf=i+1;
            posrl=i+1;
        }
        else if(s[i]=='L')
        {
            cntl++ ;
                if(cntl==1) poslf=i+1;
                posll=i+1;
        } 

    }
    if( cntr==0 and cntl==0 ) cout<<0;
    else
    if( cntr ==0 ) cout<< posll << " " << poslf-1 ;
    else
    if(cntl==0) cout<<posrf << " "<< posrl+1;
  
    else cout<<posrf << " " << posrl;
    
return 0;
}