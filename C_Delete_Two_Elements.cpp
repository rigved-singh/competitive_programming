#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
     ll t;
     cin>> t;
     while(t--)
     {
         ll n;
         cin>> n;
         ll sum=0;
         vector<ll> v(n);
         map<ll , ll > mp;
         for(int i=0;i<n;i++)
         {
             cin>> v[i];
             sum+=v[i];
             mp[v[i]]++;

         }
         sort(v.begin(),v.end());
         ll ans=0;
         if((2*sum)%n!=0) {
             cout<< 0  << "\n";
             continue;
         }
         for(int i=0;i<n;i++)
         {  
                if(v[i]!=(2*sum)/n -v[i])
                 ans+=mp[(2*sum)/n -v[i]];  
                 else ans+=mp[(2*sum)/n -v[i]]-1;
         }
         cout<< ans/2 << '\n';

     }
return 0;
}