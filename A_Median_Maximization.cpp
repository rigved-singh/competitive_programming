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
        ll n , s;
        cin>> n >> s;
   
    ll pos=n/2;
    if(n&1) pos++;
     ll ans=s/(n-pos+1);
     
    cout<< ans << "\n";
    
    }
return 0;
}