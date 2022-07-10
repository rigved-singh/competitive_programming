#include<bits/stdc++.h>
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
int main()
{
cc
int s,n;
cin>>s>>n;
int arr[1001];
int arr1[1001];
for(int i=0;i<n;i++)
{
  cin>>arr[i]>>arr1[i];
 
}
int count=0;
int flag=1;
while(flag)
{ flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<s)
        {
            arr[i]=INT_MAX;
            s+=arr1[i];
            count++;
            flag=1;
        }
    }
  
  
}
if(count==n)cout<<"YES"<<endl;
else cout<<"NO"<<endl;


return 0;
}