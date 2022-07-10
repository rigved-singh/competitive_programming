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
#define mod 1000000007
int main()
{
cc
int t;
cin>>t;
while(t--)
{
    lli x,y;
    lli n;
    cin>>n;
    x=pow(n,3);
   y=pow(n-1,2);
   cout<<x%mod+y%mod<<endl;
}
return 0;
}