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
 
 ll n,m;
bool isvalid(int i, int j)
{
    if(i==1 || i==n||j==1 || j==m)
    {
        return true;
        
         
    }
    return false;
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      
      cin>>n>>m;
      int ar[n+2][m+2]{0};
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=m;j++)
          {
                if(ar[i][j]==0)
                {
                    if(isvalid(i,j))
                    {
                        ar[i][j]=1;

                        ar[i+1][j]=-1;
                        ar[i+1][j+1]=-1;
                        ar[i+1][j-1]=-1;
                        ar[i][j+1]=-1;
                        ar[i][j-1]=-1;
                        ar[i-1][j-1]=-1;
                        ar[i-1][j]=-1;
                        ar[i-1][j+1]=-1;


                    }
                }
          }
      }
for(int i=1;i<=n;i++)
{
 for(int j=1;j<=m;j++) if(ar[i][j]==-1) cout<<0 ;
 else cout<<ar[i][j];
 cout<<endl;
}
cout<<endl;

  }
return 0;
}