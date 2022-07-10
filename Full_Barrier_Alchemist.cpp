#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
#include<iomanip>
#include<queue>
#include<stack>
#include<map>
#include<fstream>
#include<math.h>
#include<ctype.h>
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
{ int s[1001],x[1001];
int t;
cin>>t;
while(t--)
{
    int n,h,y1,y2,l;
    
  cin>>n>>h>>y1>>y2>>l;
  int count=0;
  for(int i=0;i<n;i++)
  {
      cin>>s[i]>>x[i];
  }
  for(int i=0;i<n;i++)
  {
       if(s[i]==1)
       {
           
        if( x[i]<h-y1)
         if(l!=0)l--;else break;
         
       }
       else if(s[i]==2)
       {
           
          if(y2<x[i])
          if(l!=0)l--;
          else break;

       }
       if(l==0)
      break;
       count++;
  }
 
  cout<<count<<endl;
}
return 0;
}