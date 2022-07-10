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
        ll n , m;
        cin >> n >> m;
        ll ar[301];
        ll ans=0;
        ll k [m];
        for(int i=0;i<m;i++)
        {
            cin>> k[i];
        }
        for(auto &e: ar) e=0;
        for(int i=0;i<m;i++)
        {
          ll x=i;
            for(int j=1;j<x;j++)
            {
                if(ar[j]==1) ans++;
            }
            ar[x]=1;
        }
        cout<< ans <<'\n';
    }
return 0;
}