#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 
bool prime(ll x)
{
    if(x<2) return false;
    for(int i=2;i*i<=x;i++) if(x%i==0) return false;
    return true;
}
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
        int idx=-1;
        ll val=INT_MAX;
        ll sum=0;
     for(int i=0;i<n;i++)
     {cin>> ar[i];
         sum+=ar[i];
         if(ar[i]&1)
         {
             if(val>ar[i])
             {
                 idx=i;
                 val=ar[i];
             }
         }
     }
     if(prime(sum))
     {
         cout<< n-1 << '\n';
         for(int i=0;i<n;i++) {
             if(i!=idx) cout<< i+1 <<" " ;
         }
     }
     else {
         cout << n << '\n';
         for(int i=0;i<n;i++) cout<< i+1 << " "; 
     }
cout<< '\n';
    }
return 0;
}