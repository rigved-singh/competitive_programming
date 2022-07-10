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
        ll n , m;
        cin>> n >> m ;
        ll p[n], c[m];
            for(int i=0;i<n;i++) cin>> p[i];
            sort(p,p+n,greater<int>());
            for(int i=0;i<m;i++){
                cin>> c[i];
            }
                ll ans=0;
                ll idx=0;
                for(int i=0;i<n;i++)
                {
                    if(idx<m)
                    {
                        if(c[idx]<c[p[i]-1]){
                            ans+=c[idx++];
                        }
                        else ans+=c[p[i]-1];
                    }
                     else ans+=c[p[i]-1];
                }
                    cout<< ans<<'\n';
    }
return 0;
}