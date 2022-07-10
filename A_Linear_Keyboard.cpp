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
        string key;
        cin>> key;
        string s;
        cin>> s;

       
        ll ans=0;
        char curr=s[0];
        for(int i=1;i<s.size();i++)
    {
        ans+=abs((find(key.begin(),key.end(),s[i])-key.begin())-(find(key.begin(),key.end(),curr)-key.begin()));
        curr=s[i];
    }
    cout<< ans << '\n';
    }
return 0;
}