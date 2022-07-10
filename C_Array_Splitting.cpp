#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n , k ;
    cin>> n >> k;
    ll ar[n];
    for(int i=0;i<n;i++) cin>> ar[i];
    vector<int> v;
    for(int i=1;i<n;i++) v.pb(ar[i-1]-ar[i]);
        sort(v.begin(),v.end());
        ll ans=ar[n-1]-ar[0];
        for(int i=0;i<k-1;i++) ans+=v[i];
        cout<< ans ;

return 0;
}