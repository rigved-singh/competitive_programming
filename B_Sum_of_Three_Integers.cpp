#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
ll k , s;
cin>> k >> s;
ll cnt=0;

for(int i=0;i<=k;i++)
{
    for(int j=0;j<=k;j++)
    {
        int z=s-i-j;
        if(z>=0 and z<=k) cnt++;
    }
}
cout<< cnt << '\n';
return 0;
}