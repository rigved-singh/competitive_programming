#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll ans=0;
    ll s, t;
    cin>> s >> t;
    for(int i=0;i<=500;i++)
    {
        for(int j=0;j<=500;j++)
        {
            for(int k =0 ;k<=500;k++)
            {
                if(i+j+k<=s and (i*j*k)<=t) ans++;
            }
           
        }
    }
    cout<< ans ;
return 0;
}