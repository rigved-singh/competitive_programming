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
freopen("breedflip.in","r",stdin);
freopen("breedflip.out","w",stdout);
    ll n;
    cin>>n;
    ll ans=0;
    string s , k ;
    cin>> s >> k ;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=k[i]){
        while(s[i]!=k[i])
        {
            i++;
        }
        i--;
         ans++;
        }

    }
    cout<< ans << '\n';
return 0;
}