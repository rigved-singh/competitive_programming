#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
int t;
cin>>t;
while(t--)
{
            int a, b;
            cin>>a>>b;
            char arr[10][10]={0};
            vector<string> s;
            int ans=0;
            int counte=0;
            int counto=0;
            for(int i=0;i<a;i++)
            {
                string x;
                cin>>x;
                s.pb(x);
            }
                for(int i=0;i<a;i++)
                {
                    for(int j=0;j<b;j++)
                    {
                        arr[i][j]=s[i][j];
                        if((i+j)%1)
                      {
                            if(arr[i][j]=='*') counto++;
                      }
                        else 
                        {
                             if(arr[i][j]=='*') counte++;
                        }
                        }
                }
                cout<<counte<<" "<<counto<<" ";
            
                    if(a*b&1)   // odd case only one way to maximise
                    {
                        cout<<"run was odd"<<endl;
                        for(int i=0;i<a;i++)
                        {
                            for(int j=0;j<b;j++)
                            if((i+j)&1) 
                            {
                                if(arr[i][j]!='.') ans++;

                            }
                            else{
                                if(arr[i][j]!='*') ans++;
                            }
                            
                        
                        }
                    }
                        else // even case 2 way to maximise
                        {
                            cout<<"run was even"<<endl;
                            if(counte>counto)
                            {
                                for(int i=0;i<a;i++)
                                    for(int j=0;j<b;j++)
                                { 
                               if((i+j)&1) {
                                if(arr[i][j]!='.') ans++;

                            }
                            else{
                                if(arr[i][j]!='*') ans++;
                            }
                           }
                   }
                   else{
                        for(int i=0;i<a;i++)
                                    for(int j=0;j<b;j++)
                                { 
                               if((i+j)&1) {
                                if(arr[i][j]!='*') ans++;

                            }
                            else{
                                if(arr[i][j]!='.') ans++;
                            }
                           }

                   }
                        }
                           
                            
                        
 cout<<ans<<endl;
}
return 0;
}

