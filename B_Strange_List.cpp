#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll t; cin>> t;
    while(t--)
    {
        ll n , m;
        cin>>n >> m;
        vll a(n) , now(n);
        ll sum=0;
        for(int i=0;i<n;i++) 
        {
            cin>> a[i];
            sum+=a[i];
        }
        now=a;
        bool flag=true;
       while(flag)
       {
           for(int i=0;i<n;i++)
           {
               if(now[i]%m==0)
               {
                   sum+=a[i];
                   now[i]/=m;
               }
               else {
                   flag=0;
                   break;
               }
           }
       }
       cout<< sum << '\n';
    }
    
return 0;
}