#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>> n;
            int ar[n];
        vector< int > v(n+1);
        for(int i=0 ;i< n+1 ;i++)
        {
            v[i]=0;
        }
        
            for(int i=0 ;i<n;i++)
            {
                cin>> ar[i];
               v[ar[i]]++;
            }

            int ans=0;
           
            for(int i=2;i<=2*n;i++)
            {
                int curr=0 ;
                for(int j=1;j<n+1;j++)
                {
                    int x=j;
                    int y=i-j;
                    
                    if( y<=0 || y > n) continue ;
                    curr+=min( v[x], v[y] );
                }
               
                ans=max ( ans, curr/2 );
               
                 }         
            cout<< ans << '\n' ;
    }
return 0;
}