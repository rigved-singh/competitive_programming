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
int link=0,pearl=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='-') link++;
    else pearl++;

}
if(pearl==0) cout<<"YES"<<endl;
else
if(link%pearl==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
