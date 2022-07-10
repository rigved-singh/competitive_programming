#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 
const double pi=3.14159265358979323846;
int main()
{
Bl_dem
    ll n;
    cin>> n;
    double ans=0;
    ll ar[n];
    for(int i=0;i<n;i++) cin>> ar[i];
    sort(ar,ar+n,greater<int>());
    bool ok=false;
    for(int i=0;i<n;i++)
    {
        if(ok==false) ans+=(ar[i]*ar[i]);
        else ans+=(-ar[i]*ar[i]);
        ok^=1;

        }
        
    cout<< fixed << setprecision(10) << ans*pi;
return 0;
}