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
    vector<pair<int,int>> v;
    while(t--)
    {
        ll a, b;
        cin>> a >> b;
        v.pb({a,1});
        v.pb({b,-1});

    }
    sort(v.begin(),v.end());
    ll ans=0;
    ll mx =0;
    ll time=0;
    for(auto e: v) 
    {
        if(e.second==1)
        {
            mx++;
            if(mx>ans)
            {
                
               time=e.first;
            }


        }
        else if(e.second==-1){
            mx--;
        }
    ans=max(ans,mx);
    }
    cout<< time << " " << ans << " ";
return 0;
}