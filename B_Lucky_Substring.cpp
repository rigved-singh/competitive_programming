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
// EKMC kabhi memset mat use karna 
int main()
{
cc
string s;
cin >> s;
map<string ,int> m;
while(s[0]=='0') s.erase(s.begin());

for(int i=0;i<s.size();i++)
{
    for(int j=1;j<=s.size()-i;j++)
    {
        string k=s.substr(0+i,j);
        int flag=1;
       
        rep(l,0,k.size())
        {
            if(k[l]!='4'&& k[l]!= '7')
            {
                flag=0;
            }
        }
        if(flag) m[k]++;
        

    }
}
int max=-1;
if(m.size()==0) cout<<-1<<endl;
else
{
for(auto it=m.begin();it!=m.end();it++)
{
    if(it->second > max) max=it->second;
}
for(auto it=m.begin();it!=m.end();it++)
{
    if(it->second== max) {
        cout<<it->first;
        break;
    }
}
}
return 0;
}