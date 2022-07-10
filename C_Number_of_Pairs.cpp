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
        ll n , l, r;
        cin>> n >>l >> r;
        ll ar[n];
        for(int i=0;i<n;i++)
        {
            cin>> ar[i];

        }
        ll ans=0;
        sort(ar,ar+n);
        for(int i=0;i<n;i++)
        {
            
            ans+=upper_bound(ar,ar+n,r-ar[i])-ar;
            ans-=lower_bound(ar,ar+n, l-ar[i])-ar;
            if(ar[i]*2>=l and ar[i]*2<=r) ans--;
           
        }
        cout<< ans/2 <<'\n';
    }
return 0;
}