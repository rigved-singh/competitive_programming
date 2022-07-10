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
ll po(ll a, int b)
{
    ll ret=1;
    while(b)
    {
        if(b&1){
            ret*=a;

        }
        a*=a;
        b/=2;
    }
    return ret;
}
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll a, b;
        cin>> a>> b;
        vector<int> v(a);
        for(auto &e: v) {
            cin>> e;
        }
            ll ans=0;
           b+=1;
           int i=0;
            for(;i<a-1;i++)
            {
                
               ans+=min(po(10,v[i+1]-v[i])-1,b)*po(10,v[i]);
               b-=min(po(10,v[i+1]-v[i])-1,b);
               if(b==0) break;
               
                  
            }
            ans+=po(10,v[i])*(b);
            cout<< ans << "\n";
    }
return 0;
}