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
getline(cin,s);
stringstream ss;
string s1;
for(int i=0;i<s.size();i++)
{ 
    if(s[i]!=' ')
    {s[i]=tolower(s[i]);
    ss<<s[i];
    }
}
ss>>s1;
set<char> v;
for(int i=0;i<s1.length();i++)
v.insert(s1[i]);
if(v.size()==26)
cout<<"pangram"<<endl;
else cout<<"not pangram"<<endl;
return 0;
}