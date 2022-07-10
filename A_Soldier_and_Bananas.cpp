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
long double a,b,c;
cin>>a>>b>>c;
 long double ans=((1.0*c/2))*(2*a+(c-1)*a);
ans-=b;
if(ans>0) cout<<fixed<<setprecision(0)<<ans<<endl;
else cout<<"0";
return 0;
}