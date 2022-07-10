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
    while(t--){
        ll k , n ,m;
        cin>>  k >> n >>m;
        ll a[n], b[m];
        for(int i=0;i<n;i++) 
        cin>> a[i];
        for(int i=0;i<m;i++)
        cin>> b[i];
        int i=0, j=0;
        vector<ll> v;
        int flag=0;
        while(i<n and j<m)
        {
            if(a[i]==0){
                k++;
                v.pb(0);
                i++;
            
            }
            else if(b[j]==0)
            {
                k++;
                v.pb(0);
                j++;
            }
            else if(a[i]>k and b[j]> k) {
                cout<< -1 << '\n';
                flag=1;
                break;
            }
            else if(a[i]<=k){
               v.pb(a[i]);
                i++;

            }
            else if(b[j]<=k)
            {
                v.pb(b[j]);
                j++;
            }
        }
        if(i==n){
            while(j<m)
            {
                if(b[j]==0) {
                    v.pb(0);
                    k++;
                    j++;
                }
                else if(b[j]>k){
                    cout<<-1 <<'\n';
                    flag=1;
                    break;
                }
                else {
                    v.pb(b[j]);
                    j++;
                }
            }
        }
        if(j==m)
        {
            while(i<n)
            {
                if(a[i]==0){
                    v.pb(0);
                    k++;
                    i++;

                }
                else if(a[i]>k)
                {
                    cout<<-1 <<'\n';
                    flag=1;
                    break;
                }
                else {
                    v.pb(a[i]);
                    i++;

                }
            }
        }
        if(flag==0){
            for(auto e: v) cout<< e <<" " ;
            cout<<'\n';
        }
    }
return 0;
}