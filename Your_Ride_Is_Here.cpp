#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll convert(string a)
{
    ll ret=1;
    for(auto e: a)
    {
        ret*=((e-'A')+1);
    }
    return ret;
}
int main()
{
Bl_dem
string a, b;
cin>> a >> b;
ll n = convert(a);
ll m=convert(b);
if(n%47==m%47) cout<< "GO";
else cout<< "STAY";
return 0;
}