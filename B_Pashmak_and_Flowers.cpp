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
    ll ar[n];
    for(int i=0;i<n;i++) cin>> ar[i];
   ll mncnt=0 , mxcnt=0;
   bool allequal=true;
   sort(ar,ar+n);
   for(int i=0;i<n;i++) 
   {
       if(ar[i]==ar[0]) mncnt++;
       else if(ar[i]==ar[n-1]) mxcnt++;
       if(i!=0 && ar[i]!=ar[i-1]) allequal=false;
   }
 if(allequal) cout<< 0 << " "<< n*(n-1)/2;
 else
   cout<< ar[n-1]-ar[0] << " " << mncnt*mxcnt;
return 0;
}