#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll n , x;
        cin>> n >> x;
        ll cntod=0 , cnteven=0;
        for(int i=0;i<n;i++)
        {
            ll k;
            cin>> k;
            if( k&1 ) cntod++;
            else cnteven++;
        }
        bool ok = false;
        for(int i =1;i<=cntod;i+=2)
        {
            if(i>x) break;
            if( cnteven>=x-i )
            {
                cout<< "Yes"<< '\n';
                ok =true;
                break;
            }
        }
        
    if(ok==false) cout<< "No"<<'\n';
    }
return 0;
}