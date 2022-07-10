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
#define irep(i,n,m) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int s(ll x)
{
    int sum=0;
    while(x)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;

}
int main()
{
cc
lli n;
cin>>n;
ll ans=0;
while(n)
{   ans++;
if(s(ans)==10) n--;

}
cout<<ans<<endl;
return 0;
}