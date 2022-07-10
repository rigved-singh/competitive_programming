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
        ll ar[n];
        for(auto &e : ar) cin>> e;
            vector<ll > zeroes;
            vector<ll> ones;
            for(int i=0;i<n;i++)
            {
                if(i&1)
                {
                    ones.pb(ar[i]);
                }
                else zeroes.pb(ar[i]);
            }
            sort(zeroes.begin(),zeroes.end(),greater<long long>());
            sort(ones.begin(),ones.end());
            ll ans=0;
            ll one=0 , zero=0;
            int i=0;
            for(;i<min(zeroes.size(),ones.size());i++)
            {
                cout<< zeroes[i] << " "<< ones[i]<< " " ;
                zero+=zeroes[i];
                ans+=zero*ones[i];
            }
            for(;i<zeroes.size();i++)cout<< zeroes[i]<< " ";
            for(;i<ones.size();i++) cout<< ones[i]<< " ";
            cout<< '\n';
            cout<< ans<< '\n';


    }
return 0;
}