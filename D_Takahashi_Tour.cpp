#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
vector<ll> ar[1000000];
bool vis[1000000];
void dfs(int src)
{
    cout<< src<<" " ;
    vis[src]=1;
    for(auto e : ar[src])
    {
        if(!vis[e])
        {
            dfs(e);
             cout<< src <<" ";
        }
       
    }
}
int main()
{
Bl_dem
    ll n;
    cin>> n;
    for(int i=0;i<n-1;i++)
    {
        ll a,b;
        cin>> a >> b;
        ar[a].pb(b);
        ar[b].pb(a);

    }
    for(int i=1;i<=n;i++)
    {
        sort(ar[i].begin(),ar[i].end());
    }
    dfs(1);
return 0;
}