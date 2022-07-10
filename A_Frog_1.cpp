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
lli n;
cin>>n;
int arr[10000];
for(lli i=0;i<n;i++)
cin>>arr[i];
arr[1]=abs(arr[1]-arr[0]);
for(int i=2;i<n;i++)
{
    arr[i]=min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i-2]));
}
cout<<arr[n-1];
return 0;
}