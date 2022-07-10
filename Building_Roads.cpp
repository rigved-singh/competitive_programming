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
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int dx[]{1,0,0,-1};
int dy[]{0,1,-1,0};
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
 
 const int maxN=1e5;
  vi ar[maxN];
  bool vis[maxN];

    vector<int> ans ;
    void dfs(int u){
        vis[u]=1;
        for(auto e: ar[u]){
            if(!vis[e]){
                dfs(e);
            }
        }
    }
int main()
{
    Bl_dem
    int n , m;
    cin>> n>> m;
    for(int i=0 , a, b;i<m;i++){
        cin>> a >> b;
        --a ,--b;
        ar[a].pb(b);
        ar[b].pb(a);
    }       
    int con=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i) ;
                ans.pb(i);
                con++;
            }
        }
        cout<< con-1<<endl;
        for(int i=0;i<ans.size()-1;i++){
            cout << ans[i]+1 << " "<< ans[i+1]+1 << nline;
        }
return 0;
}