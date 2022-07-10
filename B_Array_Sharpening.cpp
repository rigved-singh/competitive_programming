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
        ll n;
        cin>> n;
        ll ar[n];
        for(auto &e: ar) cin>> e;
        ll a=-1 , b=n;
        for(int i=0;i<n;i++) 
        {
            if(ar[i]<i) break;
            a=i;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(ar[i]<n-1-i) break;
            b=i;
        }
        if(b<=a) cout<< "Yes" << '\n';
        else cout<< "No" << '\n';
    }
return 0;
}