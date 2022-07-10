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
lli t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i+=2)
    {
        if(s[i]!='a')
        s[i]='a';
        else s[i]='b';
    }
    for(int i=1;i<s.size();i+=2)
    {
        if(s[i]!='z')
        s[i]='z';
        else s[i]='y';
    }
    cout<<s<<endl;
}
return 0;
}