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
int flag=1;

rep(i,0,n)
{
    ll x;
    cin>>x;
 if(x%2==0) cout<<x/2<<endl;
 else  {
     cout<<(x+flag)/2<<endl;
     flag*=-1;
 }

}
return 0;
}