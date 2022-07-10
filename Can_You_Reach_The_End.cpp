#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 

int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        
        bool ok=true;
           vector<pair<ll, ll >> v;
           for(int i=0;i<n;i++) 
           {
               ll a, b;
               cin>> a >> b;
               v.pb({a,b});

           }
           sort(v.begin(),v.end());
           for(int i=1;i<n;i++)
           {
               if(v[i].first-v[i-1].first!=1 || v[i-1].second-v[i].second!=1)
               {
                   ok=false;
                   break;
               }
           }
            if(ok==false) cout<<"YES";
            else cout<<"NO";
            cout<< "\n";
    }
return 0;
}