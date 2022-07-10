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
    while(t--){
        ll n , m;
        cin>> n >> m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) 
        cin>> v[i][j];
    }
    ll ans=0;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<m/2;j++){
           int ar[]{v[i][j], v[n-i-1][j] , v[i][m-j-1], v[n-i-1][m-j-1]};
           sort(ar,ar+4);
           ans+=abs(ar[1]-ar[0])+abs(ar[2]-ar[1])+abs(ar[3]-ar[1]);
           v[i][j]=ar[1];
           v[n-i-1][j]=ar[1];
           v[i][m-j-1]=ar[1];
           v[n-i-1][m-j-1]=ar[1];
        }
    }
        if(n&1)
        { 
            for(int j=0;j<m/2;j++)
            {
             ans+=abs(v[n/2][j]-v[n/2][m-j-1]);

            }

        }
        if(m&1)
        {
             for(int i=0;i<n/2;i++)
            {
             ans+=abs(v[i][m/2]-v[n-i-1][m/2]);

            }
        }
    cout<< ans << "\n";
        
    }

return 0;
}