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
    ll ar[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>> ar[i];
            sum+=ar[i];
    }
    ll q;
    cin>> q;
    while(q--)
    {
        ll a ,b;
        cin>> a >> b;
        cout<< sum-(ar[a-1]-b)<<'\n';
    }
return 0;
}