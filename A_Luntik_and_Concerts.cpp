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
    cin>> t;
    while(t--)
    {
        ll  a , b, c;
        cin>> a >> b >> c;
        ll sum=a+2*b+3*c;
        if(sum&1)cout<< 1 << " ";
        else cout<< 0 ;
        cout<< '\n'; 
        


    
    }
return 0;
}