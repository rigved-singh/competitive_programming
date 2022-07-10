#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const ll mod=1e9+7;
ll cal(ll n , ll i)
{
    
    ll ans=1;
    while(i)
    {
        if(i&1){
            ans*=n;
            ans%=mod;
        }
        n*=n;
        n=n%mod;
        i/=2;
    }
    return ans;
}
int main()
{
Bl_dem
ll t;
cin>> t;
while(t--)
{
    ll n, k;
    cin>> n >> k;
    ll ans=0;
   
            for(int i=0;i<30;i++)
            {
                if((k&(1<<i)))
                {
                    ans+=cal(n,i);
                }
            }
    cout<< ans%mod << '\n';
}
return 0;
}