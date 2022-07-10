#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const long long MOD=1e9+7;
vector<int> ar[1000001];
int vis[1000001];
    void dfs(int a)
    {
        vis[a]=1;
        for(auto child: ar[a]){
            if(!vis[child]){
                dfs(child);
            }
        }
    }
  ll pow(ll a,ll cc)
  {
      ll res=1;
      while(cc)
      {
          if(cc%2==0){
              a*=a;
              a%=MOD;
              cc/=2;
          }
          else{
              res*=a;
              res%=MOD;
              cc--;
          }
      }
      return res;
  }
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n] , b[n];
        for(int i=1;i<=n;i++){
            ar[i].clear();
            vis[i]=0;
        }
       
        for(int i=0;i<n;i++)
        {
            cin>> a[i];
        }
        for(int i=0;i<n;i++) cin>> b[i];
        for(int i=0;i<n;i++){
            ar[a[i]].pb(b[i]);
            ar[b[i]].pb(a[i]);
        }
        int cc=0;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i]){
                cc++;
                dfs(i);
            }
        }
        ll ans=pow((ll)2,(ll)cc);
    cout<<  ans <<'\n';

    }
return 0;
}