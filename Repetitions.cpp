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
lli count=1;
lli ans=1;
string s;
cin>>s;
for(lli i=1;i<s.length();i++)
{
    if(s[i]==s[i-1])
    count++;
    else count=1;

    ans=max(count,ans);    
}
cout<<ans<<endl;
return 0;
}