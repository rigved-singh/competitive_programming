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
bool op[26];
int main()
{
cc
ll n,k;
cin>>n>>k;
map<char,int> m;
char arr[n];
rep(i,0,n) {
    cin>>arr[i];
    m[arr[i]]++;
}
ll curr=0;
int flag=1;
rep(i,0,n) 
{
    if(curr>k) 
    {
        flag=0;
    break;
    }
    if(--m[arr[i]]==0 ) 
    {
        if(!op[arr[i]-65])
        if(curr+1>k) flag=0;

     if(op[arr[i]-65]) 
     curr--;

       op[arr[i]-65]=false;

        
    }
    else 
    {
        if(op[arr[i]-65]==false)
        {
            curr++;
            op[arr[i]-65]=true;
        }

    }
}
if(flag==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}