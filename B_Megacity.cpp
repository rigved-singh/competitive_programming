#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n , k ;
    cin>> n >> k;
    vector<pair<float , ll >> v;
    for(int i=0;i<n;i++)
    {
            double a, b;
            ll c;
            cin>> a >> b >> c;
           double dis=sqrt(a*a +b*b);
           v.pb({dis,c});

    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
       
        v[i].second+=v[i-1].second;
    }
    bool flag=1;
    int i=0 , j=n-1;
    ll ans=-1;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(k+v[mid].second>=1000000)
        {
            ans=mid;
                j=mid-1;
        }
        else if(k+v[mid].second<1000000)
        {
            i=mid+1;
        }
       
    }
    if(k+v[n-1].second<1000000) cout<< -1 << '\n';
    else
    cout<<fixed << setprecision(8) << v[ans].first << '\n';
 


return 0;
}