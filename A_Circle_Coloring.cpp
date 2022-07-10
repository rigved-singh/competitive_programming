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
    while(t--){
        ll n;
        cin>> n;
        ll a[n],b[n],c[n];
        for(int i=0;i<n;i++){
            cin>> a[i];
        }
        for(int i=0;i<n;i++){
            cin>> b[i];
        }
        for(int j=0;j<n;j++){
            cin>> c[j];
        }
       vector<ll > ans ;
       ans.pb(a[0]);
       for(int i=1;i<n;i++)
       {
           if(i==n-1)
           {
               if(a[i]!=ans[i-1] and a[i]!=a[0]) 
               ans.pb(a[i]);
               else if(b[i]!=ans[i-1] and b[i]!=a[0]) ans.pb(b[i]);
                              else ans.pb(c[i]);
           }
           else if(a[i]!=ans[i-1])
           ans.pb(a[i]);
           else
           ans.pb(b[i]);

          
            
       }
       for(auto e: ans) cout<< e <<" " ;
       cout<< "\n"; 
       
    }
return 0;
}