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
ll n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr,arr+n);
vector<int> ans;
int prev=0;
int cnt=0;
for(int i=0;i<n;i++){
    if(cnt==k) break;
    if(arr[i]-prev==0) 
    continue;
    ans.pb(arr[i]-prev);
    prev+=arr[i]-prev;
    cnt++;
}
for(auto e: ans) cout<< e <<endl;
    if(ans.size()<k){
        for(int i=0;i<k-ans.size();i++) cout<< 0 << endl;
    }

return 0;
}