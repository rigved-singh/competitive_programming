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
cin>>s;
int uc=0,lc=0;
for(int i=0;i<s.size();i++)
{
    if(isupper(s[i])) uc++;
    else lc++;
}
if(uc>lc)
{
    for(int i=0;i<s.size();i++)
    s[i]=toupper(s[i]);
}
else {
    for(int i=0;i<s.size();i++)
    s[i]=tolower(s[i]);
}
cout<<s<<endl;
return 0;
}