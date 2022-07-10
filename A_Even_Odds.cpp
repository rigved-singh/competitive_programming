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
unsigned lli n,k;
cin>>n>>k;
if(n&1)
{
  if(k<=n/2+1) cout<<fixed<<setprecision(16)<<2*k-1;
  else cout<<fixed<<setprecision(16)<<2*(k-(n/2+1));
}
else {
    if(k<=n/2) cout<<fixed<<setprecision(16)<<2*k-1;
      else cout<<fixed<<setprecision(16)<<2*(k-n/2);
}
return 0;
}