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
int n,x;
cin>>n>>x;
string s;
cin>>s;
sort(s.begin(),s.end());
int cnt=1;
string ans="";
ans+=s[0];
char las=s[0];
rep(i,1,s.size())
{
     if(cnt==x) break;
    if(s[i]-las>1)
    {
        cnt++;
        ans+=s[i];
        las=s[i];
    }
   

}
if(cnt==x) 
{
    int sum=0;
    rep(i,0,ans.size())
    {
        sum+=ans[i]-97+1;
    }
    cout<<sum<<endl;
}
else cout<<-1<<endl;


return 0;
}