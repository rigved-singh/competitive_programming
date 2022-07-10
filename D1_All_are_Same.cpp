#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
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
        vector<ll > ar;
        set<ll > s;
       for(int i=0;i<n;i++) 
       {
           ll x;
           cin>> x;
           if(s.find(x)==s.end())
           {
           ar.pb(x);
           s.insert(x);
           }
       }
        sort(ar.begin(),ar.end());
        ll mn=INT_MAX;
        for(int i=1;i<ar.size();i++)
        {
            mn=min (mn,ar[i]-ar[i-1]);
        }
        cout<< mn << '\n';

    }
return 0;
}