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
        char ar[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) ar[i][j]='.';
        }
        int cnt=0;
        
        for(int i=1;i<n;i+=2)
        {
            for(int j=1;j<n;j+=2)
            {
                ar[i][j]='Q';
                cnt++;
            }
        }
        int i=0;
        while(n>cnt){
            ar[0][i]='Q';
            cnt++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) cout<< ar[i][j];
            cout<< "\n";
        }
    }
return 0;
}