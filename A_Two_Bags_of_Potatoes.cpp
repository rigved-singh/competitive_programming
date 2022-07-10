#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll y , k , n;
    cin>> y >> k >> n;
    int x=k-y%k;
if(x==0) x=k;    
    if(x+y>n) {
        cout<< -1;
        return 0;
    }

while(x+y<=n){
    cout<< x << " " ;
    x+=k;
}
return 0;
}