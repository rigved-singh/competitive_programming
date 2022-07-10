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
   ll n;
   ll f;

    cin>>n>>f;
   if(!(n&1))
   {
       cout<<n+2*f<<endl;
   }
   else
   {
       rep(i,2,n+1)
       {
           if(n%i==0)
           {
               cout<<n+i+2*(max(0,int(f-1)))<<endl;
               break;
           }
       }
   }
}

return 0;
}