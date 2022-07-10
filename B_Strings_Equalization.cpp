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
ll t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    int flag=0;
    
    
   for(int i=0;i<s.length();i++)
   {
       if(t.find(s[i])!=string::npos)
       {
           flag=1;
           break;
       }
   }
   cout<< (flag ? "YES" : "NO");
   cout<<endl;
}
return 0;
}