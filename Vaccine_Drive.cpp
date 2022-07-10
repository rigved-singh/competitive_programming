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
ll t;
cin>>t;
while(t--)
{
    ll g,p;
    cin>>g>>p;
    ll arr[11];
    ll sum=0;
    for(int i=1;i<=10;i++)
    {
        cin>>arr[i];
    }
    
    for(int j=g+1;j<=10;j++)
    {
    sum+=arr[j];    
    }
    cout<<fixed<<setprecision(0)<<ceil(1.0*(sum+1)/p)<<" "<<ceil(1.0*(sum+arr[g])/p)<<endl;
   
}
return 0;
}