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
        ll n ,k;
        cin>>n>> k;
        ll ar[n];
        ll b[n];
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>> ar[i];

            b[i]=ar[i];
        }
        map<ll,ll> mp;
        sort(b,b+n);
        for(int i=0;i<n-1;i++){
            mp[b[i]]=b[i+1];
           
        }

        mp[b[n-1]]=1e10;
       
        
        for(int i=0;i<n;i++)
        {
            while( i+1<n && ar[i+1] == mp[ar[i]] && mp[ar[i]]!=1e10 )
            {
                i++;
            }
            cnt++;
        }
     
      if(cnt>k) cout<<"No";
         else cout<<"Yes";
      cout<<'\n';
    }
return 0;
}