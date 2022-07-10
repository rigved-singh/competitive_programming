#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n , m;
     cin>> n >> m; 
    vector<pair<ll , ll >> a(n);
    
     for(int i=0;i<n;i++)
     {
         ll x;
         cin>> x;
         a[i]={x,i};
     }
     sort(a.begin(),a.end());
     for(int i=0;i<m;i++)
     {
         ll x;
         cin>> x;
         auto it=lower_bound(a.begin(),a.end(),make_pair(x,(long long)100000000));
        if(it==a.end()) cout<< n << " ";
        else cout<< it-a.begin()<< " " ;
        

          }
     
return 0;
}