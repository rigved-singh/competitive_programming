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
// EKMC kabhi memset mat use karna 
int main()
{
cc
ll n;
cin>>n;
int arr[n];
rep(i,0,n) cin>>arr[i];
if(arr[0]&1 && arr[n-1]&1 && n&1) cout<<"Yes";
else cout<<"No";



return 0;
}