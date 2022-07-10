#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n;
    cin>> n;
   ll home[n] , away[n];
   map<int,int> mp;
   for(int i=0;i<n;i++) {
       cin>> home[i] >> away[i];
       mp[home[i]]++;
   }
   for(int i=0;i<n;i++)
   {
       ll anshome=n-1, ansaway=n-1;
       ll k=mp[away[i]];
      
       if(k>0) {
           anshome+=k;
           ansaway-=k;
       }
       cout<< anshome << " " << ansaway << '\n';


   }
return 0;
}