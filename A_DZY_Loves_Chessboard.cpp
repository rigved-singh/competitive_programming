#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
int n  , m;
cin >> n >> m;
char ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
        cin>> ar[i][j];
        if(ar[i][j]=='-') cout<< ar[i][j];
        else {
            if((i+j)&1) cout<< 'B';
            else cout<< 'W';
        }
       
        }
         cout<< '\n';
    }
       
return 0;
}