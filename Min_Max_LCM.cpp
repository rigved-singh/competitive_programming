#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 
int main()
{
Bl_dem
ll t;
cin >> t;
while(t--)

{
    ll a, b;
    cin>> a >> b;
    cout<< a*(2LL) << " " << (a*b)*(a*b-1)<< '\n';
}
return 0;
}