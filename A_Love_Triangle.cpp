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
int n;
cin>>n;
int flag=0;
map<int,int> m;

    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        m[i]=x;

    }

    for(int i=1;i<=n;i++)
    {
        if(m[m[m[i]]]==i) flag=1;
    }
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}