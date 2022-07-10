#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
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
       vector<pair<int,int> > f(n);
       for (int i = 0; i < n; i++)
       {
           int k;
           cin>> k;
           int u=0;
           for (int j = 0; j < k; j++)
           {    
                int x;
                cin>> x;
                u=max(u,x-j+1);
           }
           f[i]=make_pair(u,k);
           
       }
       sort(f.begin(),f.end());
       ll ans=f[0].first;
       int curr=f[0].first;
       for(int i=0;i<n;i++)
       {
           if(curr<f[i].first)
           {
               ans+=f[i].first-curr;
               curr=f[i].first;
           }
           curr+=f[i].second;
       }
       cout<< ans <<'\n';
        }
    
return 0;
}