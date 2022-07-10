#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
string s;
vector<int> v;
cin>>s;
for(int i=0;i<s.size();i++)
{
    if(s[i]!='+')
    v.pb(s[i]-48);
}
sort(v.begin(),v.end());
for(int i=0;i<v.size()-1;i++) 
{
    cout<<v[i]<<"+";
}
cout<<v[v.size()-1];

return 0;
}