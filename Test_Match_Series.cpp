#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll in =0 , en=0;
        for(int i=0;i<5;i++)
        {
            int x;
            cin>> x;
            if(x==1) in++;
            else if(x==2) en++;
        }
        if(in> en) cout<< "INDIA";
        else if(en>in) cout<< "ENGLAND";
        else cout<< "DRAW";
        cout<< endl;
    }
return 0;
}