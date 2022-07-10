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
ll n;
cin>>n;

rep(i,0,n) 
{
    int c, sum;
    cin>>c>>sum;
    ll ans=(sum/c+1)*(sum/c+1)*(sum%c)+(sum/c)*(sum/c)*(c-sum%c);
    cout<<ans<<endl;
    
}



return 0;
}