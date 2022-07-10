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
int a,b;
cin>>a>>b;
if(b>a) cout<<"-1"<<endl;
else {
    int ans=a/2+a%2;
   if(ans%b==0) cout<<ans<<endl;
   else {
       cout<<(ans/b)*b+b;
   }
}




return 0;
}