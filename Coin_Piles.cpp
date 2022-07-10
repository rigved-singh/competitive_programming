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
        ll a , b;
        cin>> a >> b;
        if((a+b)%3==0 and 2*a>=b and 2*b>=a) cout<<"YES";
        else cout<<"NO";
        cout<<'\n';
    }
return 0;
}