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
        ll n ;
        cin>> n;
        ll a[n] , b[n];
        ll mx=0;
        for(int i=0;i<n;i++) cin>> a[i];
        for(int i=0;i<n;i++) {
            cin>> b[i];
            mx=max(b[i],mx);
        }

        ll curr=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=mx) continue;
            else curr+=b[i];
    
        }
        sort(a,a+n);
        ll ans=min(max(curr, mx),a[n-1]) ;
        cout<< ans << '\n';
    }
return 0;
}