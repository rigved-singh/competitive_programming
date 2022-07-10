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
lli count=0;
    lli a=0,b=0;
    cin>>a>>b;
lli aeven,aodd,beven,bodd;
if(a%2==0)
aeven=aodd=a/2;
else {
    aeven=a/2;
    aodd=a/2+1;
}
if(b%2==0)
beven=bodd=b/2;
else {
    beven=b/2;
    bodd=b/2+1;
}
count=(aeven*beven)+(aodd*bodd);
  cout<<count<<endl;
} 
return 0;
}