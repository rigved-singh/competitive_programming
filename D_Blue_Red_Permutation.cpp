#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define all(v) (v).begin(),(v).end()
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
        vector<ll > v(n);
        for(auto &e: v) cin>> e;
        string s;
        cin>> s;
        multiset<ll >  b, r;
        for(int i=0;i<n;i++)
        {
            (s[i]=='B'? b : r).insert(v[i]);
        }
        ll cnt=1;
        bool ok =true;
        while(b.size())
        {
            ll mn=(*b.begin());
           if(mn<cnt)
           {
               ok =false;
               break;
           }
           else 
           {
               cnt++;
               b.erase(b.begin());
               
           }

        }
        while(r.size())
        {
            ll mx=(*r.begin());
            if(mx<=cnt)
            {
                cnt++;
                r.erase(r.begin());
                
            }
            else{
                ok =false;
                break;
            }
        }
        if(ok) cout<< "YES";
        else cout<< "NO";
        cout<< '\n';

    }
return 0;
}