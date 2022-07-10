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
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define repe(i,s,n) for(ll i=s;i<=n;i++)
#define irep(i,n,m) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool prime(ll x)
{
    if(x<2) return false;
    repe(i,2,sqrt(x))
    {
        if(x%i==0) return false;
    }
    return true;
}
int main()
{
cc
ll n;
cin>>n;
ll k=n;
ll count=0;

    repe(i,2,sqrt(n))
    {
        if(n%i==0)
        {
            if(prime(i)) 
            {
                
                n-=i;
                break;

            }
        }
    }
  if(k==n) cout<<1<<endl;
  else  
cout<<1+n/2<<endl;
return 0;
}