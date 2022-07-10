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
   
    int op=0,cl=0;
    string s;
    cin>>s;
    int c=0;
    if(s.size()%2==1) cout<<"NO"<<endl;
    else if(s.size()%2==0)
    {
        if(s[0]==')') cout<<"NO"<<endl;
        else if(s[s.size()-1]=='(') cout<<"NO"<<endl;
         else cout<<"YES"<<endl;

     } 
    
}
    return 0;
}
