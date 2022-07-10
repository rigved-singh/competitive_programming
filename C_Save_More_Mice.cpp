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
        ll n  , k;
        cin>> n >> k;
        vector<ll> v(k);
        for(int i=0;i<k;i++) cin>> v[i];
        sort(v.begin(),v.end(),greater<int>());
        ll curr=0;
        ll ans=0;
        for(ll i=0;i<k;i++)
        {
            if(v[i]> curr )
            {

                ans++;
                curr+=n-v[i];
                v[i]=-1;

            }
            else if(v[i]!=-1) break;
            
        }
        cout<< ans << '\n';
    }
return 0;
}