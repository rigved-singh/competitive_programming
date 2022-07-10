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
{
cc
int t;
	cin>>t;
	while(t--)
	{
	     lli n;
	     cin>>n;
	     int count=0;
	     if(n>2048)
	     {
             int j=2;
	          
	          
	            for(int i=12;i<=17;i++)
                {
                    if(n&1<<i)
                    count=count+j;
                   j*=2;
                }
              
         }

	          for(int i=0;i<=11;i++)
	          {
	               if(n&(1<<i))
	               count++;
	          }
              cout<<count<<endl;
	     }
	     
	
return 0;
}