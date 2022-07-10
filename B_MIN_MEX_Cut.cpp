#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int t;
    cin>> t;
    while(t--)
    {
        string s;
       
     cin>> s;
      ll ans=0;
    ll n=(long long )s.size();
   
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='0' and s[i+1]!='0') ans++;
    }
    if(s[n-1]=='0') ans++;
       cout<< min(ans,2LL)<<'\n';
   
 
    }
return 0;
}