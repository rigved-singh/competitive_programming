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
    cin>>n;
    cout << 1 << " "<< 1 << " "  ;
    ll ans=2;
    ll no=2;
    while(ans<pow(2,n))
    {
        cout<< no << " ";
        ans+=no;
        no*=2; 
    }
    cout<< '\n';
    }
return 0;
}