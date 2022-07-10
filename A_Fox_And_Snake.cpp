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
lli a,b;
cin>>a>>b;
string e;
string first;
string last;
for(int i=0;i<b;i++)
{
    e+='#';
}
for(int i=0;i<b-1;i++)
{
    first+='.';
}
first+='#';
for(int i=0;i<b;i++)
{
    last+='.';
}
last[0]='#';
for(int i=0;i<a;)
{
    cout<<e<<endl;
    i++;
    if(i<a) cout<<first<<endl;
    i++;
    if(i<a)cout<<e<<endl;
    i++;
    if(i<a) cout<<last<<endl;
    i++;
    
}

return 0;
}