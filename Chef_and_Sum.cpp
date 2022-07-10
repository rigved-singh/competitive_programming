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
    bool present=false;
    int n,k;
    cin>>n>>k;
    int ar[10000];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n-1;i++)
    {  
        int sum=0;
        sum=ar[i];
        for(int j=i+1;j<n;j++)
    {
        if(ar[j]<k)
        {
        sum+=ar[j];
        if(sum==k)
        {
            present=true;
      break;
        }
        else
         sum=ar[i];
        }
        
    }
    
}

if(present)
    cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}
return 0;
}