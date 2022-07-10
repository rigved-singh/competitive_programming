#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define irep(it,m) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
cc
int n;
cin>>n;
ll arr[n];
rep(i,0,n) cin>>arr[i];
rep(i,0,n/2)
{
    if(i%2==0)
    {
        ll temp=arr[i];
        arr[i]=arr[n-i-1];
            arr[n-i-1]=temp;
    }
}
for(auto e: arr) cout<<e<<" ";
return 0;
}