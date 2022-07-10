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
string s;
cin>>s;
int cnt=0;
int flag=0;
for(ll i=s.size()-1;i>=0;i--)
{
    if(s[i]=='0')
    cnt++;
    if(s[i]=='1'&&cnt>=6)
    flag=1;
}
if(flag) cout<<"yes"<<endl;
else cout<<"no"<<endl;
return 0;
}