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
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
ll n;
cin>>n;
ll arr[n];
rep(i,0,n) cin>>arr[i];
ll ans=0;
bool op=false;
rep(i,0,n)
{
    
    if(arr[i]==1)
    {
        if(op==false)
      { ans++;
      op=true;
       while(arr[i+1]==1 && i!=n-1) 
           {
               ans++;
               i++;
           }
      }
       else
       {
           ans+=2;
           while(arr[i+1]==1 && i!=n-1) 
           {
               ans++;
               i++;
           }
       }
    }
   
}
 cout<<ans<<endl;
return 0;
}