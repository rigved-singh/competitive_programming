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
ll ans=0;
for(int i=s.size();i>=1;i--)
{
    string k=s.substr(0,i);
    reverse(k.begin(),k.end());
    if(s.substr(0,i)!=k){
        ans=i;
        break;
    } 
    
}
cout<<ans<<endl;
return 0;
}