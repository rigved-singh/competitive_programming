#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool isprime(ll x)
{
    if(x<2) return false;
    for(int i=2;i*i<=x;i++)
    if(x%i==0) return false;
    return true;
}
int main()
{
Bl_dem
    int t;
    cin>> t;
    while(t--)
    {
        ll n; 
        cin>> n;
        set<int> used;
      for(int i=2;i*i<=n;i++)
      {
          if(n%i==0 and i>1)
          {
              used.insert(i);
              n/=i;
              break;
          }
      }
      for(int i=2;i*i<=n;i++)
      {
          if(n%i==0 and !used.count(i) )
          {
              used.insert(i);
              n/=i;
              break;
          }
      }
      if(used.size()<2 || used.count(n) || used.count(1))
      cout<< "NO"<<'\n';
      else{
          cout<< "YES"<< '\n';
          used.insert(n);
          for(auto e: used) cout<< e << " " ;
          cout<< '\n';
      }

      
    }
return 0;
}