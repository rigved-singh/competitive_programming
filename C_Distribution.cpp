#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n ;
    cin>> n;
    ll s[n] , t[n];
    for(int i=0;i<n;i++) cin>> s[i];
    for(int i=0;i<n;i++) cin>> t[i];
        for(int i=1;i<n;i++) s[i]+=s[i-1];
        
        
return 0;
}