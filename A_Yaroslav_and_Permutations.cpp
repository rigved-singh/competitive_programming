#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
int n;
cin>> n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>> x;
        mp[x]++;
    }
    int mx=0;
    for(auto e: mp) {
        if(e.second>mx) mx=e.second;

    }
    if(mx>ceil(1.0*n/2)) cout<< "NO";
    else cout<< "YES";

return 0;
}