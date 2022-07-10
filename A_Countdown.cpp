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
        ll n ;
        cin>> n;
        string s;
        cin>> s;
        reverse(s.begin(),s.end());
        ll ans=s[0]-'0';
        for(int i=1;i<n;i++)
        {
            if(s[i]!='0') ans+=1+s[i]-48;
        }
        cout<< ans <<'\n';

    }
return 0;
}