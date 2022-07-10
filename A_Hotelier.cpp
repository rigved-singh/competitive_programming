#include<bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
ll n;
cin>>n;
int arr[10]={0};
string s;
cin>>s;

rep(i,0,n)
{

if(s[i]=='L')
{
    rep(j,0,10)
    {
        if(arr[j]==0)
        {
            arr[j]=1;
            break;
    }
    }
}
else if(s[i]=='R')
{
    for(int j=9;j>=0;j--)
    {
        if(arr[j]==0)
        {
            arr[j]=1;
            break;
    }
    }
}
    else {
        arr[(s[i]-48)]=0;
    }
}
for(int i=0;i<10;i++) cout<<arr[i];

return 0;
}