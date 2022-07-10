#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const ll mod=1e9+7;
int main()
{
Bl_dem
    ll n;
    cin>> n;
    vll v(n+2,0);
    for(int i=1;i<=n;i++)
    {
        for(int j=i-1;j>=max(0,i-6);j--) v[i]+=v[j] , v[i]%=mod;
            if(i<=6) v[i]++;
    }

    cout<< v[n];
return 0;
}