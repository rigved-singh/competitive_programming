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
ll int t;
cin>>t;
while(t--)
{
   lli n,m,x,y,s;
   lli a[10000],b[10000];
    cin>>n>>m;
    cin>>x>>y>>s;
    lli area=m*n;
    lli count =0;
    lli count1=0;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        count++;
    }
       for(int i=0;i<n;i++)
    {
        cin>>b[i];
        count1++;
    }
lli nonarea=(count*m)+(count1*n)-(count*count1);
lli total=area-nonarea;
if(total%s==0)
{
    cout<<total/s<<endl;

}
else
{
    while(total%s!=0)
    {
        total-=total%5;
    }
    cout<<total/s<<endl;
}


}
return 0;
}