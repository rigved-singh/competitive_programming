#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    Bl_dem
             ll n;
             cin>> n;
                   if(n%6==0 || n%6==1  || n%6==3  )
                   {
                       cout<<"yes" ;
                       return 0;
                   }
                   cout<< "no";

return 0;
}