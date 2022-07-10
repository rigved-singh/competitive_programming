#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll ar[1000000];
void pre()
{
    for(int i=1;i<1000000;i++) ar[i]=i^ar[i-1];
}
int main()
{
Bl_dem
int t;
cin>> t;
pre();
while(t--){
    ll a , b;
    cin >> a >> b;
    ll curr=a;
    ll ans=0;
   ans=ar[a-1];
    if(ans==b) cout<< curr << '\n';
    else
    if((ans^b)==a) cout<< curr+2<<'\n';
    
    else cout<< curr+1 << '\n';
}

return 0;

}