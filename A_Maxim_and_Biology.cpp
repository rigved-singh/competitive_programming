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
string s;
cin>>s;
int ans=INT_MAX;
rep(i,0,n-3)
{
    int curr=0;
   int t=abs(s[i]-'A');
   curr+=min(t,26-t);

   int t2=abs(s[i+1]-'C');
   curr+=min(t2,26-t2);

   int t3=abs(s[i+2]-'T');
   curr+=min(t3,26-t3);

   int t4=abs(s[i+3]-'G');
   curr+=min(t4,26-t4);

   ans=min(ans,curr);
}
cout<<ans<<endl;

return 0;
}