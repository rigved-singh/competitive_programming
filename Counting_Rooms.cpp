#include<bits/stdc++.h>
#define MOD 1000000007
#define nline "\n"
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
 
 int dx[]{1,0,0,-1};
 int dy[]{0,1,-1,0};
    int vis[1001][1001];
char ar[1007][1007];
 void dfs(int x , int y)
 {
     vis[x][y]=1;
        for(int i=0;i<4;i++)
        {
            if(!vis[x+dx[i]][y+dy[i]] and ar[x+dx[i]][y+dy[i]]=='.' ){
                dfs(x+dx[i],y+dy[i]);
            }
        }
 }
int main()
{
    Bl_dem
        int n , m;
        cin>> n >> m;
        int ans=0;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>> ar[i][j];
            }
        }
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    if( vis[i][j]==0 and ar[i][j]=='.' ) {
                        dfs(i,j);
                        ans++;
                    }
                }
            }
                cout<< ans ;

return 0;
}