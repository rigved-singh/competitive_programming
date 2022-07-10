#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll x ,y ;
        cin >> x >> y;
        if(x>y)
        {
            cout<< abs(x-y) << '\n';
            
        }
        else{
           
           ll dis=abs(y-x);
           if(dis&1) cout<< 2+ dis/2;
           else cout<< dis/2 ;
           cout<< '\n';        }
    }
return 0;
}