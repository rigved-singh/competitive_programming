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
        vector<ll> v(n);
        vector<ll> freq(n + 1, 0);
        for(int i=0;i<n;i++){
            cin>> v[i];
        }
        n=unique(v.begin(),v.end())-v.begin();
        v.resize(n);
            for(int i=0;i<n;++i){
                freq[v[i]]++;
            }
            freq[v[0]]--;
            freq[v[n-1]]--;
            ll ans=INT_MAX;
            for(int i=0;i<n;i++){
                ans=min(ans,freq[v[i]]);
            }
            cout<< ans+1 <<'\n';


    }
return 0;
}