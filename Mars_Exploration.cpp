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
lli count=0;
lli no=s.length()/3;
string ans="SOS";
for(int i=0;i<s.size()-2;i+=3)
{
    if(s[i]!='S')
    count++;
    if(s[i+1]!='O')
    count++;
    if(s[i+2]!='S')
    count++;
}
cout<<count;
return 0;
}