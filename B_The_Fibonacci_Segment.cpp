#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 
int main()
{
Bl_dem
    ll n;
    cin>> n;
    ll ar[n];
    for(auto &e: ar) cin>> e;
    ll res ,ans ;
    res=ans=min(2LL,n);
    for(int i=2;i<n;i++)
    {
        if(ar[i-1]+ar[i-2]==ar[i]) ans++;
        else ans=min(2LL, n);
        res=max(ans,res);
    }
    cout<< res;
return 0;
}