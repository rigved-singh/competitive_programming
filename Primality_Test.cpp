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
    bool prime=true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            prime=false;
            break;
        }
        else prime=true;
    }
    if(n==1||n==0)
    cout<<"no"<<endl;
    else if(prime)
    cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
return 0;
}