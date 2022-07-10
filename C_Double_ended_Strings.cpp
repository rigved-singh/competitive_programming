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
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int ans = 0;
   for(int len=1;len <= min(n,m);len++)
   {
       for(int i=0;i+len<=n;i++)
       {
           for(int j=0;j+len<=m;j++)
           {
               if(a.substr(i,len)==b.substr(j,len)) 
               {
                   ans=max(ans,len);
               }
           }
       }
   }
   cout<<a.size()+b.size()-2*ans<<'\n';
}
return 0;
}