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
string s;
cin>> s;
set<string> ans;
ans.insert(s);
for(int i=0;i<s.size();i++)
{
    char temp=s[s.size()-1];
    for(int i=s.size()-1;i>=0;i--)
    {
        s[i+1]=s[i];
    }
    s[0]=temp;
    ans.insert(s);


}
cout<<ans.size();
return 0;
}