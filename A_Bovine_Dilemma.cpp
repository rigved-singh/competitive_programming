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
float findarea(int b, int c)
{
   float area=0;
   float y1=1;
   float y2,y3;
   y2=y3=0;
   float x1,x2,x3;
   x1=0;
   x2=b;
   x3=c;
   area=(x2*(y3-y1)+x3*(y1-y2));
   return area/2;
}
int main()
{
cc
int t;
cin>>t;
while(t--)
{ float findarea(int ,int );
    int n;
cin>>n;
int arr[50];
set<float> area;
for(int i=0;i<n;i++)
    cin>>arr[i]; 
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        area.insert(findarea(arr[i],arr[j]));
    }
   
    cout<<area.size()<<endl;


}
return 0;
}