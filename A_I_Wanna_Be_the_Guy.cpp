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
int n;
cin>>n;

set<int> ans;
int x;
cin>>x;
for(int i=0;i<x;i++)
{
    int y;
    cin>>y;
    ans.insert(y);
}
cin>>x;
for(int i=0;i<x;i++)
{
    int y;
    cin>>y;
    ans.insert(y);
}
if(ans.size()==n) cout<<"I become the guy.";
else cout<<"Oh, my keyboard!";
return 0;
}