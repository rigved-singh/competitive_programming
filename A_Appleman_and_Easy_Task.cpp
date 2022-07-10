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
lli t;
cin>>t;
char arr[t][t];
int flag=1;
for(int i=0;i<t;i++)
{
    for(int j=0;j<t;j++)
   {
         cin>>arr[i][j];
   }
}

for(int i=0;i<t;i++)
{
    if(!flag) break;

    for(int j=0;j<t;j++)
        {
            int count=0;

            

                if((i+1)<t)
                {
            if(arr[i+1][j]=='o') 
            count++;
                }

            if(j+1<t)
            {
             if(arr[i][j+1]=='o') 
             count++;
            }

             if(i-1>=0)
              {
                  if(arr[i-1][j]=='o') 
                  count++;
              }

              if(j-1>=0)
              {
               if(arr[i][j-1]=='o') 
               count++;
              }
               if(count&1)
               {
                   flag=0;
                   cout<<"NO"<<endl;
                   break;
               }
            
        }
        
}
if(flag) cout<<"YES"<<endl;


return 0;
}