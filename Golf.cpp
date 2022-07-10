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
    lli n,x,k;
    cin>>n>>x>>k;
    if(x/k==ceil(1.0*x/k)||(n+1-x)/k==ceil(1.0*(n+1-x)/k)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}