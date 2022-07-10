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
        int n ;
        cin>> n;
        string s;
        cin >> s;
        bool ok =true;
        for(int i=0;i<n;i++)
        {
           
            for(int j=i+1;j<n;j++)
            { int a=0, b=0;
               for(int k=i;k<=j;k++)
               {
                   if(s[k]=='a') a++;
                   else b++;
                   
               }
               if(a==b and a!=0){
                   cout<< i+1 << " " << j+1 << '\n';
                   ok=false; 
                   break;
               }
            }
            if(ok==false) break;
        }
        if(ok==true) cout<< -1 << " " << -1 << '\n';
    }
return 0;
}