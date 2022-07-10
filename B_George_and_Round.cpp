#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 
int main()
{
Bl_dem
     ll  n , m;
     cin>> n >> m;
     ll ar[n];
     for(auto &e: ar) cin>> e;
     vector<int> b;
     for(int i=0;i<m;i++) 
     {
          ll x;
          cin>> x;
          b.pb(x);
     }
     ll ans=0;
     sort(b.begin(),b.end());
     for(int i=0;i<n;i++)
     {
          int idx=lower_bound(b.begin(),b.end(),ar[i])-b.begin();
          if(idx>=b.size())
          {
           ans++;   
          }    
          else{
               b.erase(b.begin()+idx);
          }
          
     }
     cout<< ans << '\n';
return 0;
}