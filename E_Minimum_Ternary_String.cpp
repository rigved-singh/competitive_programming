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
cin>>s;
int i=0;
int ans=0;
for(int k=0;k<s.size();k++)
{
while(i<s.size()-1)
{
    if(s[i+1]-s[i]==-1)
    {
        char temp=s[i];
        s[i]=s[i+1];
        s[i+1]=temp;
    
    }
    else i++;
}
}
cout<<s;
return 0;
}