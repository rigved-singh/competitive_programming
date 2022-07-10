#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int tt;
    cin>>tt;
    while(tt--){
        int n, m;
        cin>> n >> m;
        string a;
        cin>> a;
           while(m--){
               int changed=0;
               string b=a;
                for(int i=0;i<n;i++)
                {
                    if(b[i]=='0')
                    {
                        int alive=0;
                        if(  i && a[i-1]=='1' ) alive++;
                        if(  i+1<n && a[i+1]=='1' ) alive++;
                        if(alive==1)
                        {
                            b[i]='1';
                            changed=1;

                        }

                    }
                    
                }
                a=b;
                    if(!changed) break;
           }
            cout<< a <<'\n';
    }
return 0;
}