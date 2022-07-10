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
ll a,b;
cin>>a>>b;
if(a==b) cout<<a<<1<<" "<<b<<2<<endl;
else if(a+1==b) cout<<a<<99<< " " <<b*100<<endl;
else if(a==9&&b==1) cout<<9<< " "<< 10<<endl;
else cout<<-1<<endl;
return 0;
}