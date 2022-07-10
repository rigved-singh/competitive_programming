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
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==2)
    {
        if(s[0]==s[1]||s[0]>s[1]) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<s[0]<<" "<<s[1]<<endl;
        }
    }
    else {
        string k=s.substr(1,s.size()-1);
        cout<<"YES"<<endl;
        cout<<2<<endl;
        cout<<s[0]<<" "<<k<<endl;
    }
}
return 0;
}