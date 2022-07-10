#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
ll n , k;
cin>> n >> k;
ll ar[k];
for(int i=0;i<k;i++) cin>> ar[i];
sort(ar,ar+k);

bool ok=true;
for(int i=0;i<k-2; i++)
{
    if( ar[i]==ar[i+1]-1 and ar[i+1]==ar[i+2]-1 || ar[i]==n || ar[i]==1) 
    {
           ok =false;
  break;
    } 
}
if(ar[0]==1 || ar[k-1]==n) ok =false;
if(ok) cout<< "YES";
else cout<< "NO";
cout<< '\n';
return 0;
}