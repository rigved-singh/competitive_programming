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
ll tc;
cin>>tc;
for(int t=1;t<=tc;t++)
{
    ll ar[3][3];
    for(int i=0;i<3;i++) cin>>ar[0][i];
    cin>>ar[1][0]>>ar[1][2];
    for(int i=0;i<3;i++) cin>>ar[2][i];
    ar[1][1]=0;
     ll ans=0;
     ll mx=0;
     for( int i=0;i<3;i++ )
     {
         for(int j=0;j<3;j++)
         if(abs(ar[i][j])>mx) mx=abs(ar[i][j]);
     }
     for(ll k=-1*mx;k<=mx;k++ )
     {
         ll res=0;
         ar[1][1]=k;
         if(ar[0][1]-ar[0][0]==ar[0][2]-ar[0][1])
         {
             res++;
         }
         if(ar[1][1]-ar[1][0]== ar[1][2]-ar[1][1])
         {
             res++;
         }
         if(ar[2][1]-ar[2][0]==ar[2][2]-ar[2][1])
         {
            res++;
         }
         if(ar[1][0]-ar[0][0]==ar[2][0]-ar[1][0])
         {
            res++;
         }
          if(ar[1][1]-ar[0][1]==ar[2][1]-ar[1][1])
         {
          res++;
         }
          if(ar[1][2]-ar[0][2]==ar[2][2]-ar[1][2])
         {
             res++;
         }
          if(ar[1][1]-ar[0][0]==ar[2][2]-ar[1][1])
         {
            res++;
         }
         if(ar[1][1]-ar[0][2]==ar[2][0]-ar[1][1])
         {
             res++;
         }
             ans=max(res,ans);

     }
     cout<<"Case #"<<t<< ": "<< ans<<endl;
     
    
}
return 0;
}