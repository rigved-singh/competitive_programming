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
cin>> t;
while(t--)
{
    ll n;
    cin>> n;
    map<ll , ll > mp;
    n=(long)pow(2,n);
    for(int i=0;i<n;i++) 
    {
        ll x;
        cin>> x;
        mp[x]++;
    }
  
    if(mp.size()>2) cout<< "NO";
    else if(mp.size()<2) cout<< "YES";
    else {
       
      vector<ll > a ;
        for(auto &e: mp)
        {
            a.pb(e.first);
        }
        if(abs(a[0]-a[1])!=1) cout<< "NO";
        else cout<<"YES";




    }
    cout<< "\n";
}

return 0;
}