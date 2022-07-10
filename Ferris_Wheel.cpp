#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
int n , x;
cin>> n >> x;
int a[n];
for(int i=0;i<n;i++) cin>> a[i];
sort(a,a+n);
ll ans=0;

for(int i=0,j=n-1;;){
    while(a[i]+a[j]>x and j>=0) --j;
    if(i>=j) break;
    i++ , j--;
    ans++;
}


cout<< n-ans << '\n';
return 0;
}