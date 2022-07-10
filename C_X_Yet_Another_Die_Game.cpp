#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n;
    cin>>n;
    if(n<=6) cout<< 1 ;
    else {
        ll ans=0;
        ans=(n/11)*2;
        if(n%11<=6 and n%11>0) ans++;
        else if(n%11>6) ans+=2;
        cout<< ans <<'\n';
    }
return 0;
}