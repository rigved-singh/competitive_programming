#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 
int main()
{
Bl_dem
    ll ans=0;
    ll n , m;
    cin>> n >> m;
    char ar[n+2][m+2]{'.'};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        cin>> ar[i][j];
    }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(ar[i][j]=='W')
                {
                    if(ar[i-1][j]=='P')
                    {
                        ans++;
                        ar[i-1][j]='k';

                    }
                    else if(ar[i+1][j]=='P')
                    {
                        ar[i+1][j]='k';
                        ans++;
                    }
                    else if(ar[i][j+1]=='P')
                    {
                        ans++;
                        ar[i][j+1]='k';
                    }
                    else if(ar[i][j-1]=='P')
                    {
                        ans++;
                        ar[i][j-1]='k';
                    }

                }
            }
        }
            cout<< ans << '\n';


return 0;
}