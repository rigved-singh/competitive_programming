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
ll t;
cin>>t;
while(t--)
{
    lli n;
    cin>>n;
    ll arr[n];
    rep(i,0,n) cin>>arr[i];
    bool chk=true;
    rep(i,0,n-1)
    {
        if(arr[i]<=arr[i+1])
        {
            chk=false;
            break;
        }
    }
    if(chk) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
return 0;
}