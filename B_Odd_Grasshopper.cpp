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
        ll x , t ;
        cin>> x >> t;
        ll diff=0;
        if(x%2==0)
        {
            if(t>0){
                diff--;
                diff-=4*((t-1)/4);
                
                if((t-1)%4==1)
                {
                    diff+=t;
                }
                else if((t-1)%4==2)
                {
                    diff+=(2*t-1);
                }
                else if((t-1)%4==3){
                    diff+=(t-3);
                }
            }
                
        }
        else {
            if(t>0)
            {
            diff++;
                diff+=4*((t-1)/4);
                if((t-1)%4==1)
                {
                    diff-=t;
                }
                else if((t-1)%4==2)
                {
                    diff-=(2*t-1);
                }
                else if((t-1)%4==3){
                    diff+=(-1*t+3);
                }
            }

        }
      
        cout<< x+diff<< '\n';
    }
return 0;
}