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
int t;
cin>>t;
while(t--)
{
    ll n,k,f;
    cin>>n>>k>>f;
    vector<ll> st;
    vector<ll > end;
   ll s,en;
   cin>>s>>en;
   st.pb(s);
   end.pb(en);
    for(ll i=1;i<n;i++)
    {
        ll s;
        cin>>s;
       st.pb(s);
        
        ll en;
        cin>>en;

        end.pb(en);

    }
    sort(st.begin(),st.end());
    sort(end.begin(),end.end());
    for(ll i=1;i<n;i++)
    {
        if(st[i]<end[i-1])
        {
            st[i]=end[i-1];

        }
        if(end[i]<st[i])
        {
            end[i]=st[i];
        }
    }
    ll cht=0;
    cht+=st[0]-0;
    
    rep(i,1,n)
    {
        cht+=st[i]-end[i-1];
    }
    cht+=f-end.back();

    if(cht>=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}