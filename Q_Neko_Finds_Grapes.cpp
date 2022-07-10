#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n , m;
    cin >> n >> m;
    ll oddchest=0 , evenchest=0 , oddkey=0 , evenkey=0;
    for(int i=0;i<n;i++) 
    {
        ll x;
        cin>> x;
        if(x&1) oddchest++;
        else evenchest++;
    }
    for(int i=0;i< m;i++){
        ll x;
        cin>> x;
        if(x&1) oddkey++;
        else evenkey++;
    }
    cout<< min(evenkey,oddchest)+min(oddkey,evenchest);
return 0;
}