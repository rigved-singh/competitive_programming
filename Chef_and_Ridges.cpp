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
    int n;
    cin>>n;
    vi s;
    int x;
    x=pow(2,n);
    s[0]=x/2;
    s[1]=x/4;
    for(int i=2;i<n;++i)
    {
        s[i]=(s[i-1]+s[i-2])/2;

    }
    cout<<s[n-1]<<" "<<x<<" ";
}
return 0;
}