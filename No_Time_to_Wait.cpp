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
lli a,b,c;
cin>>a>>b>>c;
lli arr[a];
int flag=0;
lli reqtime=b-c;
for(lli i=0;i<a;i++)
{
    cin>>arr[i];
 if(reqtime<=arr[i])
  {
     flag=1;
 }   
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}