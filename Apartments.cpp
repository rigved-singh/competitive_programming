#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
Bl_dem
ll n , m , k;
cin >> n >> m >> k;
ll ar[n] , b[m];
for(int i=0;i<n;i++) cin >> ar[i];
for(int i=0;i<m;i++) cin>> b[i];
sort(ar,ar+n);
sort(b,b+m);
ll i=0 , j=0;
ll ans=0;
for(;i<n;i++)
{
   
    while(j<m &&b[j]<ar[i]-k){
    ++j;
    }
    if(j<m&&b[j]<=ar[i]+k) {++ans ; ++j;}
    
}
cout<< ans ;
return 0;
}