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
int t;
cin>>t;
while(t--)
{int n;
cin>>n;
string s;
cin>>s;
int count=0;
rep(i,0,s.size())
{
    if(s[i]=='0') count++;
}
if(count==0) cout<<"DRAW"<<endl;
else
if(count==1)cout<<"BOB\n";

else if(count&1) cout<<"ALICE\n";

else cout<<"BOB\n";
}
return 0;
}