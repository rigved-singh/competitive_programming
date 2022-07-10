#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll unsigned long long
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

ll b[n];
ll sum=0;
rep(i,0,n)
{
    int x;
    cin>>x;
    sum+=x;
}
rep(i,0,n)
{
    cin>>b[i];
}
sort(b,b+n,greater<long long>());
if(b[0]+b[1]>=sum) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}