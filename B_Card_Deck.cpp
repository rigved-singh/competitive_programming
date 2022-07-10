#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
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
    vector<int>v;
    vector<int> ans;
    ll mx=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
        if(x>mx) {
            ans.pb(i);
            mx=x;
        }
    }
    reverse(ans.begin(),ans.end());
    
        for(auto e: ans)
        {
            rep(i,e,v.size())
            {
                cout<<v[i]<<" ";
            }
            v.erase(v.begin()+e,v.end());
        }
    cout<<endl;
    

}
return 0;
}