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
int flag=0;
rep(i,1,s.size()-1)
{
    if(s[i]!='.'&&s[i-1]!='.'&&s[i+1]!='.')
    {
        if(s[i-1]!=s[i]&&s[i-1]!=s[i+1]&&s[i]!=s[i+1]) {
            flag=1;
            break;
        }
    }
}
if(flag) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
