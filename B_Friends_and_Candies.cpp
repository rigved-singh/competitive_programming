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
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    rep(i,0,n) {
        cin>> arr[i];
        sum+=arr[i];
    }
    if(sum%n!=0) cout<<-1<<endl;
    else 
        {
                sum/=n;
                ll ans=0;
                rep(i,0,n) 
                {
                    if(arr[i]>sum) ans++;
                }
                cout<<ans<<endl;
        }
}
return 0;
}