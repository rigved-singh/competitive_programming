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
lli n,c;
cin>>n>>c;

int mx=0;

int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<n-1;i++)
{
   if(arr[i]-arr[i+1]>mx)   
        mx=arr[i]-arr[i+1];     
    
}
if(mx-c<=0) cout<<"0"<<endl;
else
cout<<mx-c<<endl;


return 0;
}