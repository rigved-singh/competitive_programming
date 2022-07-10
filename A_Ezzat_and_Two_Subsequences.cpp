#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
int t;
cin>> t;
while(t--)
{
ll n;
cin>> n;
ll ar[n];
for(int i=0;i<n;i++)
{
    cin>> ar[i];
}
sort(ar,ar+n,greater<int>());
double ans=0;
ans+=ar[0];

double sum=0;
for(int i=1;i<n;i++)
    sum+=ar[i];

n--;
sum/=n;
ans+=sum;
cout << fixed <<setprecision(9) <<ans<<"\n";
}
return 0;
}