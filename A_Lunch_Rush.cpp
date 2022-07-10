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
cin>>n>>k;
int f[n],t[n];
int mx=INT_MIN;
for(int i=0;i<n;i++)
{
    cin>>f[i];
    cin>>t[i];
    if(t[i]>k)
    {
        int x=f[i]-(t[i]-k);
        mx=max(mx,x);
    }
    else mx=max(mx,f[i]);
}
cout<<mx<<endl;
return 0;
}