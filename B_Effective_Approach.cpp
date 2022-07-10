#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int n;
    cin>> n;
    map<ll , ll > mp;
    ll ff , ss ;
    for(int i=1;i<=n;i++){
        ll x;
        cin>> x;
        mp[x]=i;
        if(x==1) ff=i;
        if(x==n)  ss=i;
    }
    int q;
    cin>> q;

    ll ans1=0 , ans2=0;
    while(q--){
        ll num;
        cin>> num;
      
        ans1+=mp[num];
        ans2+=n-mp[num]+1;
      
       
        cout<<'\n';
       
    }
    cout<< ans1 <<" " << ans2 <<"\n";
return 0;
}