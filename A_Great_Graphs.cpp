#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
//COMBINOTORICS ---------------------------------------------------------------------------------
ll fact(ll n) { if(n<=1) return 1; return n*fact(n-1);}
ll ncr(ll n , ll r){ return fact(n)/(fact(r)*fact(n-r));}
ll npr(ll n , ll r) {return fact(n)/fact(n-r);}
// look for terminators after if statement 
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        ll ans=0;
        vector<ll > v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>> v[i];
        }
        sort(v.begin(),v.end());
        for(int i=n-2;i>=0;i--)
        {
            v[i]+=v[i+1];

        }
       
        for(int i=0;i<n-1;i++)
        {
                        ans+=-1*(v[i+1]-(v[i]-v[i+1])*(n-i-1));
        }
        ans+=v[n-1];
        
        cout<< ans << '\n';


    }
return 0;
}