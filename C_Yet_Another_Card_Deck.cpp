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
lli n,k;
cin >> n >> k;
map<int,int> ma;
for(ll i=1;i<=n;i++)
{
    int x;
    cin >> x;
    if(ma[x]==0)
    {
        ma[x]=i;
    }
}
for(ll i=0;i<k;i++)
{
    int x;
    cin >> x;
    cout<<ma[x]<<" ";
    int y=ma[x];
    
    for(auto it=ma.begin();it!=ma.end();it++)
    {
        if(it->second<y) it->second+=1;

    }
    ma[x]=1;
}
return 0;
}