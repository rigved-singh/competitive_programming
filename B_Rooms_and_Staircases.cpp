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
    string s;
    cin>>s;
    ll lc1=0,lc2=0;
    
    rep(i,0,n)
    {
        if(s[i]=='1')
        {
        lc1=i+1;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='1')
        lc2=n-i;
    }
    
    
    cout<<max(n,max(lc1,lc2)*2)<<endl;
}
return 0;
}