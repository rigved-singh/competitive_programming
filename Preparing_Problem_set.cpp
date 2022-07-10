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
int n,l,r,x;
int count=0;
cin>>n>>l>>r>>x;
int arr[10000];


for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n-1;i++)
{
    for(int j=1;j<n;j++)
    if(arr[i]+arr[j]>=l&&arr[i]+arr[j]<=r)
    {
        if(abs(arr[i]-arr[j])>=x)
        count++;
        
    }

}

cout<<count<<endl;

return 0;
}