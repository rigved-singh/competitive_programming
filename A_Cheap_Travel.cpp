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
int n,m,a,b;
cin>>n>>m>>a>>b;
 
   int ans=min((n/m)*b+(n%m)*a,n*a);
   ans=min(ans,(n/m)*b+b);
   cout<<ans<<endl;

return 0;
}