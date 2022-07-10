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
lli t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    int flag=0;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0 and 2*i>=n/i)
        {
                flag=1;break;
        }
    }
    if(flag) cout<<1<<endl;
    else cout<<0<<endl;
   
    
}
return 0;
}