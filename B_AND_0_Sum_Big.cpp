#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
using namespace std;
    ll pow(ll n , ll k)
    {
        ll res=1;
        while(k)
        {
            if(k%2==0)
            {
               n*=n;
               n%=mod;
               k/=2;
            }
                res=(res*n);
                res%=mod;
                k--;
            
        }
        return res;
    }
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll n , k;
        cin>> n >> k;
        cout<< pow(n,k) << '\n';
    }
return 0;
}