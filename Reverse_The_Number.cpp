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
	    vi s;
        int x;
        int count=0;
	lli n;
	cin>>n;
	while(n!=0)
	{
        if(n%10==0&&count==0)
        {n=n/10;
        }else{
        s.push_back(n%10);
	     n=n/10;
         count++;
        }
	}
	   
	for(auto x=s.begin();x!=s.end();x++)
	     cout<<*x;
	     cout<<endl;
	
	
	}
return 0;
}