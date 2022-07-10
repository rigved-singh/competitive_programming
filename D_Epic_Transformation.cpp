#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
//COMBINOTORICS ---------------------------------------------------------------------------------
ll fact(ll n) { if(n<=1) return 1; return n*fact(n-1);}
ll ncr(ll n , ll r){ return fact(n)/(fact(r)*fact(n-r));}
ll npr(ll n , ll r) {return fact(n)/fact(n-r);}
// look for terminators after if statement 
int main()
{
Bl_dem
    ll t;
    cin>> t ;
    while(t--)
    {
        ll n;
        cin>> n;
        map<ll , ll > mp;
        set<pair<ll,ll>> s;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>> x;
            mp[x]++;
        }
        ll ans=0;
        for(auto e: mp)
        {
            s.insert({e.second,e.first});
            ans+=e.second;
        }
       
        while(s.size()>1)
        {
             auto it=(*s.rbegin());
             s.erase(it);
             auto it2=(*s.rbegin());
             s.erase(it2);
             if(it.first>1)
             {
                 s.insert({it.first-1,it.second});
             }
             if(it2.first>1) {
                 s.insert({it2.first-1,it2.second});
             }
             ans-=2;
        }
        
      
        cout<< ans << '\n';
       
    }
return 0;
}