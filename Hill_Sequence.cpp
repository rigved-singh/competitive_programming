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
        
        map<ll , ll > mp;
        bool ok =true;
        vector<ll > l , r;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>> x;
            mp[x]++;
            if(mp[x]>2) ok =false;
        }
        auto it=mp.rbegin();
       
        if(it->second>1) ok =false;
        if(!ok) cout<< "-1" << '\n';
        else{
            for(auto &e: mp)
            {
                if(e.second==2)
                {
                    l.pb(e.first) ;
                    r.pb(e.first);
                }
                else if(e.second==1) l.pb(e.first);
            }
            if(r.size()==0) {
                sort(all(l) , greater <int>());
                for(auto e: l ) cout<< e << " ";
            }

            else if(l[0]>r[0])
            {
                for(auto e: l ) cout<< e<< " ";
                sort(all(r) , greater<int>());
                for(auto e: r) cout<< e << " "; 
            }
            else {
                for(auto e: r) cout<< e << " ";
                cout << l[l.size()-1] << " ";
                
               l.erase(l.begin()+l.size()-1);
                sort(all(l) , greater<int>());
                for(auto e: l ) cout<< e << " ";
            }
            
            cout<< '\n';
        }
        
    }
return 0;
}