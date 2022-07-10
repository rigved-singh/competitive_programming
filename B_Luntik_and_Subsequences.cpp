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
    cin>>t ;
    while(t--)
    {
        ll n;
        cin>>n ;
        ll cntz=0  , cnt1=0;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>> x;
            sum+=x;
            if(x==0) cntz++;
            else if(x==1) cnt1++;
        }
        cout<< fixed<<setprecision(0 )<< (long long)pow(2,cntz)*cnt1<< '\n';
        

    }
    return 0;
}   