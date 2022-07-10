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
int t;
cin>>t;
while(t--)
{
   double a,b;
    cin>>a>>b;
    lli ans=0;
  double k=b;
    lli count=0;
while(b)
{
    if(a*(b/a)>1&&a*(b/a)<=b) b-=a*(b/a);
    else if(a>1&&a<=b) b-=a;
    else --b;
    ans++;
}
cout<<ans<<endl;

}
return 0;
}