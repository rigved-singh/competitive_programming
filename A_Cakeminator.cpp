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
int a,b;
cin>>a>>b;
int ans=0;
char arr[a][b];
for(int i=0;i<a;i++)
{ char ch;
    for(int j=0;j<b;j++)
    {
        cin>>arr[i][j];
    }

}
for(int i=0;i<a;i++)
{
    int flag=1;
    for(int j=0;j<b;j++)
    {
            if(arr[i][j]=='S')
            flag=0;
    }
    if(flag)
    {
        for(int k=0;k<b;k++)
        arr[i][k]='c';
    }
    
    
}
for(int i=0;i<b;i++)
{
    int flag=1;
    for(int j=0;j<a;j++)
    {
            if(arr[j][i]=='S')
            flag=0;
    }
    if(flag)
    {
        for(int k=0;k<a;k++)
      {
           arr[k][i]='c';
      }
    }
    
}
for(int i=0;i<a;i++)
{
    for(int j=0;j<b;j++)
    if(arr[i][j]=='c') ans++;
}


cout<<ans<<endl;


return 0;
}