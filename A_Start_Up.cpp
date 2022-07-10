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
int main()
{
cc
string s;
cin>>s;
string k=s;
reverse(k.begin(),k.end());
if(k==s)
{
    int flag=1;
    rep(i,0,s.size())
    {
            if(s[i]!='A'&&s[i]!='H'&&s [i]!='I'&&s[i]!='M'&&s [i]!='O'&&s [i]!='T'&&s [i]!='U'&&s [i]!='V'&&s [i]!='W'&&s [i]!='X'&&s [i]!='Y')
            flag=0;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
else cout<<"NO"<<endl;
return 0;
}