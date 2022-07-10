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
        char a[n], b[n];
        for(int i=0;i<n;i++) cin>> a[i];
        for(int i=0;i<n;i++) cin>> b[i];
        int ans=0;

        for(int i=0;i<n;i++)
        {
            if((a[i]-'0')+(b[i]-'0')==1) 
            ans+=2;
            else if(a[i]-'0'+b[i]-'0'==2)
            {
               
                while(i!=n-1)
                {
                    i++;
                   if((a[i]-'0')==0|| (b[i]-'0') ==0) 
                   { 
                       ans+=2;
                   break;
                   }

                    
                }
            
            }
            else if(a[i]-'0'+b[i]-'0'==0)
            {
                if(i!=n-1 and a[i+1]-'0'==1 and b[i+1]-'0'==1 ) {
                    ans+=2;
                    i++;
                }
                else ans++;
            }
            
        }
        cout<< ans << '\n';
    }
return 0;
}