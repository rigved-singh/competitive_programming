#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define all(v) (v).begin(),(v).end()
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
    int a , b;
    cin>> a >> b;
    if(a==b) cout<< "Draw";
    else if(a==1) cout<< "Alice";
    else if(b==1) cout<< "Bob";
    else if(a>b) cout<< "Alice";
    else if(b>a) cout<< "Bob";

return 0;
}