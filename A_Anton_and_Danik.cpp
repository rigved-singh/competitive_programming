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
string s;
cin>>s;
int a=0;
int d=0;
rep(i,0,n)
{
    if(s[i]=='A') a++;
    else d++;
}
if(a>d) cout<<"Anton"<<endl;
else if(d> a) cout<<"Danik"<<endl;
else cout<<"Friendship"<<endl;
return 0;
}