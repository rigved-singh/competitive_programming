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
for(ll j=1;j<=t;j++)
{
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
    
            ll k=i;
            ll sum=i;
            while(sum<=n)
            {
                if(sum==n)
                {
                    ans++;
                }
                sum+=k+1;
                k++;
            }
    }
    cout<<"Case #" << j <<": "<<ans<<endl;

}
return 0;
}