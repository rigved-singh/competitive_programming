#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll  vector<long , long > 
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll a[3] ,m ;
        cin>>a[0] >> a[1] >> a[2]>> m;
        sort(a,a+3);
        ll mx=accumulate(a,a+3,0)-3;

        ll mn=a[2]-a[1]-a[0]-1;
        if(m>=mn && m<=mx) cout<< "YES" << '\n';
        else cout<< "NO"<< "\n";

    }
return 0;
}