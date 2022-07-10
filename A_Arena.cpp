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
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int arr[n]={0};
   for(int i=0;i<n;i++)
   cin>>arr[i];
  
   sort(arr,arr+n);
    int ans=n-1;
   for(int i=0;i<n-1;i++)
   {
       if(arr[i]<arr[i+1])
       {
           ans=i;
           break;
       }
   }
    cout<<n-ans-1<<endl;


}
return 0;
}