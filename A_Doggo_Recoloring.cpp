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
int x;
cin>>x;
string s;
cin>>s;
int flag=0;
int arr[26]{0};
rep(i,0,x)
{
    arr[s[i]-97]++;
}
rep(i,0,26)
{
    if(arr[i]>1) 
    {
        flag=1;
        break;
    }
}
if(x==1) cout<<"YES"<<endl;
else 
if(flag) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}