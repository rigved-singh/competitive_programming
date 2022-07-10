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
freopen("pails.in","r",stdin);
freopen("pails.out","w",stdout);
int x,y,m;
cin>> x >>y >> m;
int ans=0;
for(int i=0;i<1001;i++)
{
    for(int j=0;j<1001;j++)
    {
        if(x*i+y*j<=m) ans=max(ans,x*i+y*j);
    }
}
cout<< ans ;
return 0;
}