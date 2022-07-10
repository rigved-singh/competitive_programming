#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll ar[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) cin>> ar[i][j];
        ll ans[3];

        for(int k=0;k<3;k++)
        { ll p=0;
            for(int i=0;i<3;i++)
            {
                    for(int j=0;j<3;j++)
                    {
                        if(i==k) p-=ar[i][j];
                        else p+=ar[i][j];
                    }

            }
            ans[k]=p/2;
        }
      
        int k=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(ar[i][j]==0) cout<< ans[k++];
                else cout<< ar[i][j];
                cout<< " " ;
            }
            cout<< '\n';
        }
return 0;
}