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
        ll a,b,c;
        cin>> a >> b >> c;

        int diff=abs(a-b);
        if( abs(a-b)==1 ) cout<< -1 << '\n';
        else
        if(c>2*diff || a> 2*diff || b>2*diff) cout<< -1 << '\n';
        else
         if(c+diff<=2*diff) cout<< c+diff <<'\n';
        else if(c-diff>=1) cout<< c-diff <<'\n';
        else cout<< -1 << '\n';
    }
return 0;
}