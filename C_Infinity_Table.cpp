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
while(t--)
{
    ll n;
    cin>> n;
    ll k =(int) sqrt(n);
    ll up=(k+1)*(k+1);
    k*=k;
    k++;
    if(n==(int)sqrt(n)*(int)sqrt(n)) cout<< (int)sqrt(n) << " " << 1;
    else if(n==(int)sqrt(n)*(int)sqrt(n)+1) cout<< 1 << " " << (int)sqrt(n)+1;
    else
    if(n>=up-(int)sqrt(k)){
        cout<< (int)sqrt(up) << " " << up-n+1;
    }
    else{
        cout<< n-k+1<< " " << (int)sqrt(k)+1;
    }
    cout<< '\n';

    
   
    
}
return 0;
}