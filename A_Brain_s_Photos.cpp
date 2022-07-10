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
ll n,m;
cin>>n>>m;
ll flag=0;
rep(i,0,n) 
{
    rep(j,0,m)
    {
        char x;
        cin>>x;
        if(x!='B'&&x!='G'&&x!='W')
        flag=1;
    }
}
if(flag)cout<<"#Color";
else cout<<"#Black&White";
return 0;
}