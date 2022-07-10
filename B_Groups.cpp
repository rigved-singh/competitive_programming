#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n ;
        vector<int> v[5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                int x;
                cin>> x;
                if( x==1 )v[j].pb(i);
            }
        }
        bool ok=false;
        for(int i=0;i<5;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                ll a=v[i].size();
                ll b=v[j].size();
               
                for(int k=0;k<n;k++)
                {
                    int  it=find(v[i].begin(),v[i].end(),k)-v[i].begin();
                    int itr=find(v[j].begin(),v[j].end(),k)-v[j].begin();
                    
                    if(it<v[i].size() and itr<v[j].size() )
                    {
                      
                        if(a>=b) a--;
                        else b--;
                    }
                   
                }
                
             
                 if(a==n/2 and b==n/2 )
                    {
                       
                        ok=true;
                        break;
                    }
            }
            if(ok) {
                break;


            }
        }
        if(ok) cout<< "YES"<< '\n';
        else cout<< "NO"<< '\n';
        
    }
return 0;
}