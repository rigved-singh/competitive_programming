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
    while(t--){
        int ax , ay , bx , by , fx , fy;
        cin>> ax >> ay >> bx >> by >> fx >> fy;
        ll ans=abs(ax-bx)+abs(ay-by);
           
            if(ax==bx && ax==fx && fy>min(ay,by) && fy<max(ay,by))
        {        
                cout<< ans+2 <<"\n";
        }
        else if(ay==by && ay==fy && fx>min(ax,bx) && fx<max(ax,bx))
            cout<< ans+2 <<"\n";
            else cout<< ans <<"\n";
    }
return 0;
}