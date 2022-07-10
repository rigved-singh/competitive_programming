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
int n;
cin>>n;
string a="I hate";
string b="I love";
for(int i=0;i<n;i++)
{
    if(i!=n-1)
    {
        if(i&1) cout<<b<<" that ";
        else cout<<a<<" that ";
    }
    else{
        if(i&1) cout<<b<<" ";
        else cout<<a<<" ";
    }
}
 cout<<"it";
return 0;
}