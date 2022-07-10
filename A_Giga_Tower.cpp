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
bool digit(ll x)
{x=abs(x);
    while(x)
    {
        ll k=x%10 ;
        if(k==8) return true;
        x/=10;
    }
    return false;
}
int main()
{
cc
ll n;
cin>>n;
ll cnt=1;
while(1)
{
    if(digit(++n)) 
    {
        break;
    }
    else cnt++;
  
}
cout<<cnt;
return 0;
}