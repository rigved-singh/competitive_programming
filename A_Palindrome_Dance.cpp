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
ll n,a,b;
cin>>n>>a>>b;
char s[n];
rep(i,0,n) cin>>s[i];
ll ans=0;
int flag=1;
for(int i=0;i<n/2;i++)
{
    if(s[i]=='2'||s[n-i-1]=='2')
    {
        if(s[i]==s[n-i-1])
        {
            ans+=2*min(a,b);
        }
        else if(s[i]=='0'||s[n-i-1]=='0')
        ans+=a;
        else ans+=b;
        
    }
    else if(s[i]!=s[n-i-1]){
flag=0;
break;
    } 
   
}
 if(n&1) 
    {
        if(s[n/2]=='2') ans+=min(a,b);
    }
if(flag) cout<<ans<<endl;
else cout<<-1;
return 0;
}