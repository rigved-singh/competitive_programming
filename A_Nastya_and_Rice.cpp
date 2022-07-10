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
    ll n , a , b , c , d;
    cin>> n >> a >> b >> c >> d;
    ll sum=n*(a-b);
    if(sum>c+d)
    {
        cout<< "No"<<'\n';
    }
    else if(sum+2*n*b<c-d)
    {
        cout<< "No"<<'\n';
    }
    else cout<< "Yes"<<'\n';
}
return 0;
}