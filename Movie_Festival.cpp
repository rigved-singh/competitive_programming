#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool sortbysec(const pair<ll , ll > &a, const pair<ll , ll > &b)
{
    return a.second<b.second;
}
int main()
{
Bl_dem
ll n;
cin>> n;

vector<pair<ll , ll > > v;
for(int i=0;i<n;i++)
{
    ll a, b;
    cin>> a >> b;
    v.pb({a,b});
}
sort(v.begin(),v.end(),sortbysec);
ll res=1;
ll lastending=v[0].second;

for(int i=1;i<n;i++)
{
    if(v[i].first>= lastending) {
        res++ ;
        lastending =v[i].second;
    }
}
cout<< res ;
return 0;
}