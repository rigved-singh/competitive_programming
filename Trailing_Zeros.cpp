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
   
    ll ans =0;
    for(int i=5;i<=n;i*=5)
    {
       ans+=n/i;
    }
    cout<< ans;
return 0;
}