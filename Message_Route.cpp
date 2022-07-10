#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
    int const maxN=1e5+1;
vector<int> v[maxN];
int vis[maxN];
int dis[maxN];
    int par[maxN];
    void bfs(int src)
    {
        queue<int> q;
        vis[src]=1;
        dis[src]=0;
        q.push(src);
        par[src]=-1;
        int curr=src;
        
        while(q.size()>0)
        {
           curr=q.front();
           q.pop();
            for(auto e: v[curr]){
                if(!vis[e])
                {
                q.push(e);
                dis[e]=dis[curr]+1;
                vis[e]=1;
                par[e]=curr;
                }
            }
            
         

        }
    }
int main()
{
Bl_dem
    int n , m;
    cin >> n >> m;
    while(m--)
    {
        int a , b;
        cin>> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }
    bfs(1);
    if(vis[n])
    {
    cout<< dis[n]+1<<'\n';
    vector<int> ans;
    while(n!=-1){
        ans.pb(n);
        n=par[n];
    }
    reverse(ans.begin(),ans.end());
    for(auto e: ans ) cout<< e << " ";
    }
    else cout<< "IMPOSSIBLE";
return 0;
}