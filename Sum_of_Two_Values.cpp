#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
ll n , x;
cin>> n >> x;
vector<ll> a, b;
for(int i=0;i<n;i++)
{
    ll x;
    cin>> x;
    a.pb(x);
    b.pb(x);
}
sort(a.begin(),a.end());

int i=0 ,j=n-1;
bool ok=false;
while(i<j)
{
    if(a[i]+a[j]==x)
    {
        for(int k=0;k<n;k++)
        {
            if(a[i]==b[k]|| a[j]==b[k])
            cout << k+1 << " ";
            
        }
        ok=true;
        break;

    }
    else if(a[i]+a[j]<x)
    {
        i++;
    }
    else j--;
}
if(ok==false) cout<< "IMPOSSIBLE";
return 0;
}