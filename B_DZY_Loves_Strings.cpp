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
int n;
cin>>n;
lli arr[26]{0};
lli max=0;
int index=0;
for(lli i=0;i<26;i++)
{
    cin>>arr[i];
}
for(lli i=0;i<26;i++)
{
    if(arr[i]>max)
  {
       max=arr[i];
       index=i;
}
}

while(n--)
{
s+=char(index+97);
}
lli ans=0;

for(lli i=0;i<s.size();i++)
{
    ans+=(arr[s[i]-97])*(i+1);
}
cout<<ans<<endl;

return 0;
}