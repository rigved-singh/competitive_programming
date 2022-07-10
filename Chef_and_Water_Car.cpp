
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
   
    ll a, b;
    cin>> a >> b;
    ll ansmn=0;
    if(a-1>b) 
    {
        ansmn+=(a-min(a,b)-1)*(4+(a-min(a-1,b)-2))/2;
    }
    cout<< ((a-1)*a)/2 << ' ' <<min(a-1,b)+ansmn << '\n';
    
}
return 0;
}
