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
int main()
{
cc
ll n,m,k;
cin>>n>>m>>k;
ll arr[n];
rep(i,0,n) cin>>arr[i];

sort(arr,arr+n,greater<int>());

 cout<<m/(k+1)*(k*arr[0]+arr[1])+m%(k+1)*arr[0];

return 0;
}