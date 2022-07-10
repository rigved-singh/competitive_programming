#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int a , b;
    cin>> a >> b;
   for(int i=0;i<=255;i++)
   {
      if((a^i)==b) {
          cout<< i;
          return 0;
      }
   }
return 0;
}