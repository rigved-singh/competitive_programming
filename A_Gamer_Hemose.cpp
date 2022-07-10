#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
ll t;
cin>> t;
while(t--)
{
    ll n , m;
    cin>>n >> m;
    ll ar[n];
    for(auto &e: ar)cin>> e;
    sort(ar,ar+n,greater<int>());
    if(m<=ar[0]) cout<< 1 << '\n';
    else{
        ll cnt=2*(m/(ar[0]+ar[1]));
      m=m%(ar[0]+ar[1]);
      if(m!=0 and ar[0]<m){
          cnt+=2;
      }
      else{
          if(m!=0) cnt+=1;
      }
      cout<< cnt << '\n';
    }
}
return 0;
}