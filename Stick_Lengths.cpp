#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n;
    cin>> n;
    ll ar[n];
    for(auto &e: ar) cin>> e;
    sort(ar,ar+n);
    ll ans=0;
    if(n&1) 
    {
        ll mid=n/2;
        ll curr=0;
        for(int i=0;i<n;i++)
        {
           curr+=abs(ar[i]-ar[mid]);
        }
        mid=n/2+1;
        ans=curr;
        curr=0;
        for(int i=0;i<n;i++)
        {
             curr+=abs(ar[i]-ar[mid]);
        }
        ans=min(ans,curr);
        cout<< ans << '\n';

    }
    else {
        ll mid=n/2;
      
        for(int i=0;i<n;i++)
        {
           ans+=abs(ar[i]-ar[mid]);
        }
        cout<< ans;
    }
return 0;
}