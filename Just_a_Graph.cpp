#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
vector<int> v[100001];
int vis[100001];
void dfs(int src)
{
    vis[src]=1;
    for(auto e: v[src])
    {
        if(!vis[e])
        {
            dfs(e);
        }
    }
}
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)

{
        int n;
        cin>> n;
        ll k ;
        cin>> k;
        ll ar[k];
        for(int i=1;i<=n;i++) v[i].clear() , vis[i]=0;
        for(auto &e:ar) cin>> e;
        for(int i=0; i<k;i++)
        {
            for(int j=i+1;j<k;j++)
            {
                if(ar[j]-ar[j]!=j-i)
                {
                    v[j+1].pb(i+1);
                    v[i+1].pb(j+1);

                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                dfs(i);
                ans++;
            }
        }
        cout<< ans << '\n';
}

    return 0;
}