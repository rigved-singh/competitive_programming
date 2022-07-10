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
int n;
cin>>n;
string s;
cin>>s;
int ans=0;
if(s[0]==s[1]) {
    s[0]='0'; ans++;
}
if(s[s.size()-1]==s[s.size()-2]){
    s[s.size()-1]='0';
    ans++;
}

for(int i=1;i<=s.size()-1;i++)
{
    if(s[i-1]==s[i]||s[i]==s[i+1]) {
        ans++;
        s[i]='0';
    }
}

cout<<ans<<endl;
return 0;
}