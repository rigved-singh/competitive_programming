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
        ll ar[n];
        
        for(int i=0;i<n;i++)
        {
            cin>> ar[i];
        }
        
        if(ar[0]==1)
        {
            cout<< n+1 << " " ;
            for(int i=1;i<=n;i++) cout<< i << " ";  
        }
        else{
            bool ok =true;
            for(int i=0;i<n+1;i++)
            {
                if(ar[i+1]==1 and i!=n and ar[i]==0 )
                {
                    for(int j=0;j<=i;j++) cout<< j+1 << " ";
                    cout<< n+1 <<" " ;
                    for(int j=i+1;j<n;j++) cout<< j+1 << " ";
                    ok=false;
                    cout<< '\n';
                    break;
                }
               
            }
            if(!ok) continue;
            for(int i=0;i<n+1;i++) cout<< i+1 << " ";
            cout<< '\n';  
        }
        cout<< '\n';

    }
return 0;
}