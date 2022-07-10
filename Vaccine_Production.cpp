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
int d1=0,v1=0,d2=0,v2=0,p=0;
cin>>d1>>v1>>d2>>v2>>p;
int x=0,y=0,z=0;
int count=0;
if(d1>d2)
count=d2;
else count = d1;
while(x<p)
{
    y=(count-d1)*v1;
    z=(count-d2)*v2;
    if(y<0)
    y=0;
    else y=v1;
    if(z<0)
    z=0;
    else z=v2;
    x+=(y+z);
    count++;
}
cout<<count-1<<endl;
return 0;
}