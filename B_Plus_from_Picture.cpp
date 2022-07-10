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
        int n,m;
        cin>>n>>m;
        char ar[n+2][m+2];
        for(int i=0;i<n+2;i++)
        {
            for(int j=0;j<m+2;j++) ar[i][j]='.';
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                 cin>>ar[i][j];
        }
        bool chk=true;
        int plus=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(ar[i][j]=='*' and ar[i+1][j]=='*' and ar[i-1][j]=='*' and ar[i][j+1]=='*' and ar[i][j-1]=='*')
                {
                    plus=1;
                    ar[i][j]='1';

                    for(int k=j+1;k<=m;k++)
                    {
                        if(ar[i][k-1]=='1' and ar[i][k]=='*') ar[i][k]='1';
                        else break;
                    }
                    for(int k=j-1;k>=1;k--)
                    {
                        if(ar[i][k+1]=='1' and ar[i][k]=='*') ar[i][k]='1';
                        else break;
                    }
                    for(int k=i+1;k<=n;k++)
                    {
                        if(ar[k-1][j]=='1' and ar[k][j]=='*') ar[k][j]='1';
                        else break;
                    }
                    for(int k=i-1;k>=1;k--)
                    {
                        if(ar[k+1][j]=='1' and ar[k][j]=='*') ar[k][j]='1';
                        else break;
                    }
                    break;
                    
                }
                if(plus) break;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++) 
            if(ar[i][j]!='1' and ar[i][j]!='.') 
            {
                chk=false;
                break;
            }
        }
        if(chk and plus){
            cout<<"YES"<<endl;
        } 
        else {
            
            cout<<"NO"<<endl;
        }

return 0;
}