#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n ;
    cin>> n;
    ll res=1;
    for(int i=0;i<n;i++)
    {
        res*=2;
        res%=1000000007;
    }
    cout<< res ;
return 0;
}