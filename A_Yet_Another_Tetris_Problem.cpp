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
#define irep(i,n) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
lli t;
cin>>t;
while(t--)
{
    bool od=0,ev=0;
    lli n;
    cin>>n;
    rep(i,0,n)
    {
        int x;
        cin>>x;
        if(x&1)  od=true;
        else
        ev=true;
    }
    if(od^ev) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}