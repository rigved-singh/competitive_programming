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
lli x;
cin>>x;
int ans=0;
for(int i=10;i>=1;i--)
{
    if(x%i==0)
    {
        ans=i;
        break;
    }
}
cout<<ans;
return 0;
}