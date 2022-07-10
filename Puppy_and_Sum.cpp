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
int sum(int n)
{
    if(n==0) return 0;
    return n+sum(n-1);
}
int dsum(int d,int n)
{
    if(d==1) return sum(n);
    return dsum(d-1,sum(n));
}
int main()
{
cc
int t;
cin>>t;
while(t--)
{
    int d,n;
    cin>>d>>n;
   int sum= dsum(d,n);
   cout<<sum<<endl;
    

}
return 0;
}