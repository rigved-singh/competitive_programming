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
    lli n;
    cin>>n;
  vector < int >arr;
    for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      arr.pb(x);
  }

   int res[32]={0};

   int ans=0;

   for(auto e:arr)
   for(int j=0;j<32;j++)
    if(e&1<<j) res[j]++;
        
for(int i=0;i<32;i++)
if(res[i]%5==3) ans+=1<<i;

cout<<ans<<endl;
    
    



}
return 0;
}