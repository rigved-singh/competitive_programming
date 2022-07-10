#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
int t;
cin>> t ;
while(t--)
{
 ll n;
 cin>> n;
 int ans=0;
 for(int i=1;;i++)
 {
     if(i%3!=0 and i%10!=3)
     ans++;

     if(ans==n)
     {
         cout<< i  << '\n';
         break;
         
     }
 }
}
return 0;
}