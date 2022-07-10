#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define  vll vector<ll >
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
 ll n;
 cin>> n ;
 vll v(n);
 for(auto &e: v) cin>> e;
 sort(v.begin(),v.end(),greater<ll>());
 vector<ll > ans(n);
 ans[n/2]=v[0];
 for(int i=1;i<n;i++)
 {
     if(i&1) ans[n/2-(i+1)/2]=v[i];
     else ans[n/2+i/2]=v[i];
 }
 for(auto e: ans ) cout<< e  << " " ;
return 0;
}