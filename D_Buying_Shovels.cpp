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
        ll n , k;
        cin>> n >> k ;
        ll ans=INT_MAX;
        for(ll i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i<=k) ans=min(ans,n/i);
                if(n/i<=k) ans=min(ans,i);
            }
        }
        cout<< ans << '\n';
    }
return 0;
}