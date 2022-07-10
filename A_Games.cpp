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
int t;
cin>>t;
int h[30];
int g[30];

for(int i=0;i<t;i++)
    cin>>h[i]>>g[i];
int ans=0;
for(int i=0;i<t;i++)
{
    for(int j=0;j<t;j++)
    if(j!=i)
    if(h[i]==g[j]) ++ans;

}
cout<<ans<<endl;
return 0;
}