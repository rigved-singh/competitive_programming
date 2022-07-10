#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const ll mod=1e9+7;
int main()
{
Bl_dem
ll n;
cin>>n;
    ll ans=1;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>> x;
        mp[x]++;
 }

 for(auto e: mp)
 {
     if(e.second==2){
         ans*=2;
         ans%=mod;


     }
     else if(e.second==1){
         if(e.first!=0)
         {
            
             cout<<0;
             return 0;
         }
     }
     else {
         cout<<0;
         return 0;
     }
     
 }
 cout<< ans ;
return 0;
}