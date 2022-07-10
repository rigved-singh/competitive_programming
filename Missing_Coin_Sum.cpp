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
ll res=1;
ll ar[n];
for(int i=0;i<n;i++)
cin>> ar[i];
sort(ar,ar+n);
for(int i=0;i<n and ar[i]<=res;i++)
{
    res+=ar[i];
}
cout<< res ;
return 0;
}