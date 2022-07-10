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
string s;
cin>>s;
int k=s.size()/2-1;
if(s.size()==1) cout<<s;
else 
if(s.size()%2==0)
{
    int k=s.size()/2-1;
    cout<<s[k];
    for(int i=1;i<=k;i++)
    cout<<s[k+i]<<s[k-i];
    cout<<s[s.size()-1];
}
else
{

int k=s.size()/2;
cout<<s[k];
rep(i,1,k+1)
    {
        cout<<s[k+i]<<s[k-i];
    }
   

}

return 0;
}