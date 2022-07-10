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
        ll l ,r ;
        cin>> l >> r;
        ll mid=r/2;
        mid++;
        if(mid<l) cout<<r%l;
        else cout<< r%mid;
        cout<< '\n';
    }
return 0;
}