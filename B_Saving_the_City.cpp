#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll a, b;
        cin>> a >> b;
        string s;
        cin>> s;
        vector<int > v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1') v.pb(i);
        }
        ll ans=0;
        if(v.size()>=1) ans=a;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=v[i+1]-1 and i!=v.size()-1) ans+=min((v[i+1]-v[i]-1)*b, a);
        }
        cout<< ans << '\n';
    }
return 0;
}