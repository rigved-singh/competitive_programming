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
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define irep(it,m) for(auto it=m.begin(),it!=m.end();it++)
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
lli t;
cin>>t;

while(t--)
{
    lli n;
    cin>>n;
    int flag=0;
   int arr[n+1]{-1};
   map<int,int> m;
   rep(i,0,n)
   {
       int x;
       cin>>x;
       if(flag==0)
       {
       m[x]++;
       if(m[x]>2) flag=1;
       else
       if(m[x]==2)
       {
           if(arr[x]!=i-1) flag=1;
           
           arr[x]=i;
       }
       else arr[x]=i;
       }

   }
  if(flag) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
    
}
return 0;
}
