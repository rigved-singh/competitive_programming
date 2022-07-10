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
int n,m;
cin>>n>>m;
set<int> s;
for(int i=0;i<n;i++)
{
    lli x;
    cin>>x;
    for(int j=0;j<x;j++)
    {
        lli y;
        cin>>y;
        s.insert(y);
    }
}
if(s.size()==m) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}