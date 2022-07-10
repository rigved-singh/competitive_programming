#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int n , k;
    cin>> k >> n;
    map<ll,int> m;
    for(int i=0;i<n;i++){
        ll x;
        cin>> x;
        m[x%k]++;
        if(m[x%k]>1){
            cout<< i+1 ;
            return 0;
        }

    }
    cout << -1 ;

return 0;
}