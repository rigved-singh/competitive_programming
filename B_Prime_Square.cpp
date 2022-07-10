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
#define max 100000
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool prime[max];
void sieve()
{
prime[0]=true;
prime[1]=true;
    for(lli i=2;i*i<=max;i++)
    {
        if(prime[i]==false)
       
      for(int j=i+i;j<max;j=j+=i)
      prime[j]=true;
       
    }
}
int main()
{
cc
ll t;
cin>>t;
 sieve();
while(t--)
{
    ll n;
    cin>>n;
    ll k;

        for(ll j=4*(n-1);;j++)
        {
            if( prime[j]==true && prime[j+4*(n-1)]==false)
            {
                k=j;
                break;
            
            }
        }
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) cout<<k<<" "; 
            else 
            cout<<4<<" ";
            
        }
        cout<<endl;
    }
 
}
return 0;
}