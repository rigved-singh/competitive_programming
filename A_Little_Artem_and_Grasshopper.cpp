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
bool r[10000001];
int main()
{
cc
ll n;
cin>>n;
string s;
cin>>s;

int arr[n];
rep(i,0,n) cin>>arr[i];
int i=0;
int flag=1;
while(1)
{
    if(i<0||i>n-1) 
    {
        flag=1 ;
        break;
    }
    
    if(r[i]==false)
    {
        r[i]=true;
        if(s[i]=='>')
        i+=arr[i];
        else i-=arr[i];
    }
    else {
        flag=0;
    break;
    }
}
if(flag) cout<<"FINITE"<<endl;
else cout<<"INFINITE"<<endl;

return 0;
}