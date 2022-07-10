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
    ll n;
    cin>> n;
    ll ar[n];
    for(int i=0;i<n;i++) cin>> ar[i];
    ll sum=accumulate(ar,ar+n,0);
    if(sum==0) cout<< "NO";
    else {
        cout<< "YES" << '\n';
        if(sum<0) sort(ar,ar+n);
        else sort(ar,ar+n,greater<int>());
        for(auto e: ar) cout<< e<< " "; 
    }
    cout<< '\n';
}
return 0;
}