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
       int ar[3];
       for(auto &e: ar) cin>> e;
       sort(ar,ar+3);
       if(ar[1]!=ar[2]) cout<<"NO"<<'\n';
       else{
           cout<<"YES"<<"\n";
           cout<< ar[0] << " " << ar[0] << " "<< ar[2]<<'\n';
       }
    }
return 0;
}