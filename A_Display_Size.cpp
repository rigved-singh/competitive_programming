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
bool prime(ll x)
{
    if(x<2) return false;
    for(ll i=2;i*i<=x;i++)
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
int a,b;
for(ll i=1;i*i<=n;i++)
{
if(n%i==0) {
    a=i;b=n/i;
}


}
cout<<a<< " " << b;
return 0;
}