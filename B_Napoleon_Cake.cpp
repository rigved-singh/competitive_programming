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
lli t;
cin>>t;
while(t--)
{
    lli n;
    cin>>n;
    lli arr[n]; 
        for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    lli mx=arr[n-1];
    for(lli i=n-1;i>=0;i--)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
        if(mx)
        {
        arr[i]=1;
        mx--;
        }


    }
  for(int i=0;i<n;i++)
  cout<<arr[i]<< " ";
  cout<<endl;
}
return 0;
}