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
ll t,s,x;
cin>>t>>s>>x;
int c=1;
int flag=1;
for(ll i=t;i<=x;i+=s)
{
    
    if(x==i) 
    {
        cout<<"YES"<<endl;
        flag=0;
        break;
    }
    
    if(i!=t)
    {
    
    if(x==i+1)
    {
        cout<<"YES"<<endl;
        flag=0;
        break;
    }
    }
 

}
if(flag) cout<<"NO"<<endl;

return 0;
}