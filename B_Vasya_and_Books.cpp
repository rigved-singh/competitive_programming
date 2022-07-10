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
bool ok[1000000];
int main()
{
cc
ll n;
cin>>n;
ll a[n];
rep(i,0,n)
{cin>>a[i];

}
ll k=0;

rep(j,0,n)
{
    ll x;
    cin>>x;
    if(!ok[x])
    {
        ok[x]=true;
        int cnt=0;
        for(auto i=k;i<n;i++)
        {
            if(a[i]==x)
            {
                    cout<<cnt+1<<" ";
                    k=i+1;
                    break;
            }
            else {
                ok[a[i]]=true;
                cnt++;
            }
        }
    }
    else cout<<0<<" ";
}
return 0;
}