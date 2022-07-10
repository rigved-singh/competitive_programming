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
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int arr[1005];
int vis[1005];

void  dfs(int x)
{
    
    
    if(vis[x]) 
    {
        cout<<x<<" ";
        return ;

    }
    else{
        vis[x]=1;
        dfs(arr[x]);
    }
   
}

int main()
{
cc
int n;
cin>>n;
    for(int i=1;i<=n;i++)
    cin>>arr[i];
        for(int i=1;i<=n;i++)
            {
               fill(vis,vis+1005,0);
                dfs(i);
                
            }
return 0;
}