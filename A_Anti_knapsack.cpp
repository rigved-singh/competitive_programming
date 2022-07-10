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
        ll n , k;
        cin>> n >> k;
        vector<int> v;
     
                for(int i=n;i>=(k+1)/2;i--) if(i!=k)v.pb(i);
        
       cout<< v.size()<< "\n";
       for(auto e: v) cout<< e<< " ";
       cout<<"\n"; 
    }
return 0;
}