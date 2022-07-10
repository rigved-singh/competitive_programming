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
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
using namespace std;
int main()
{ll int t,n,k,count,sum;

int a[200005];
cin>>t;
while(t--)
{sum=count=0;
    cin>>n>>k;
    if(n==0)
    cout<<0<<endl;else
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    while(sum>=0)
   { sum-=k;
    count++;
    if(sum<0)
    cout<<count<<endl;
   }
    }


return 0;
}