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
ll arr[100000];
bool visited[100000];
void dfs(int curr)
{if(visited[curr]) return ;

    visited[curr]=true;
    dfs(arr[curr]+curr);
}
int main()
{
cc
ll n,t;
cin>>n>>t;


for(ll i=1;i<n;i++)
{
    cin>>arr[i];

}
dfs(1);
cout<<(visited[t] ? "YES" : "NO" );


}