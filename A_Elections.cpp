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
        ll ar[3];
        int cnt=0;
        ll mx=0;


       for(int i=0;i<3;i++)
       {
           cin>> ar[i];
           mx=max(mx,ar[i]);
       }
       for(int i=0;i<3;i++)
       {
           if(ar[i]==mx) cnt++;
       }

        for(int i=0;i<3;i++)
        {
            if(ar[i]==mx and cnt<2) cout << 0 ;
            else if(ar[i]==mx and cnt>=2) cout<< 1;
            else cout<< mx-ar[i]+1;
        cout<< " ";
        }
        cout<< '\n';
    }
return 0;
}