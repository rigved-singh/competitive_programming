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
lli t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    if(n<31) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        if(n-30==10||n-30==14||n-30==6)
            cout<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
            else 
            cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
        
    }
}
return 0;
}