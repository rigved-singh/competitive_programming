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
string a="heidi";
int i=0,j=0;
while(i!=5)
{
    while(j!=s.size())
    {
        if(a[i]==s[j])
        {
            i++;
            break;
        }
        else j++;
    }
    if(j==s.size()) break;
}
if(i==5) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}