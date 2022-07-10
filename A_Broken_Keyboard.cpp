#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define irep(it,m) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    set<char> ans;
    rep(i,0,s.size())
    {
        int cnt=1;
        while(s[i]==s[i+1]&&i!=s.size()-1)
        {
            i++;
            cnt++;
        }
        if(cnt&1) ans.insert(s[i]);


    }
    for(auto e : ans) cout<<e;
    cout<<endl;

}
return 0;
}