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
        ll n;
        cin>> n;
        ll ar[n];
        int pos=-1, mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>> ar[i];
            if(ar[i]<mn) mn=ar[i] , pos=i;

        }
        cout<< n-1 <<"\n";
        for(int i=0;i<n;i++)
        {
            if(i==pos) continue;
            else cout<<pos+1 << " " << i+1 << " " <<  mn <<" " << mn+abs(i-pos)<<'\n';
       }
    }
return 0;
}