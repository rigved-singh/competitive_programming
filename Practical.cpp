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
lli n;
cin>>n;
int arr[10000];
for(lli i=0;i<n;i++)
cin>>arr[i];

int countl=0;
int counth=0;
sort(arr,arr+n);
lli low,high;
low=arr[0];
high=2*arr[0];
for(int i=0;i<n;i++)
{
    if(arr[i]==low)
    countl++;
    
}
for(int i=0;i<n;i++)
{
    if(arr[i]>high)
    counth++;
}
if(countl>=counth&&counth)
cout<<countl;
else if(countl<=counth&&counth)
cout<<counth;
else cout<<0<<endl;
return 0;
}