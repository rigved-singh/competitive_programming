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
lli t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  unsigned int arr[4];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  sort(arr,arr+n);
  if(n>=2)
  { int sum=arr[n-1],sum1=0;
  sum1+=arr[n-2];
   for(int i=n-3;i>=0;i--)
   {
     if(sum>sum1)
     sum1+=arr[i];
     else if(sum1>sum)
     sum+=arr[i];
     else sum+=arr[i];

   }
   if(sum1>sum)
   cout<<sum1<<endl;
   else if(sum1<sum)
   cout<<sum<<endl;
   else
    cout<<sum<<endl;
  }else if(n==1)
  cout<<arr[0]<<endl;
  
}
return 0;
}